using System;
using System.Collections;
using UnityEngine;
using Pixelplacement;
using UnityEngine.Networking;

public class MetadataObject
{
    public string name;
    public string description;
    public string image;
}

[RequireComponent(typeof(SphereCollider))]
public class MetaverseItem : MonoBehaviour
{
    // Events
    public static Action Ready;
    
    [Header("IPFS")]
    public string ipfsMetadataUrl;
    
    [Header("Components")]
    public SpriteRenderer spriteRenderer;

    [HideInInspector] public MetadataObject metadataObject;
    
    // More Components
    private SphereCollider _sphereCollider;
    
    // Control vars
    private Vector3 _initScale;

    private void Awake()
    {
        // We don't want anything to collide with sphere when just instantiated
        _sphereCollider = GetComponent<SphereCollider>();
        _sphereCollider.enabled = false;
        
        // We also save our initial scale and then we set it to 0. We start from nothing :)
        _initScale = transform.localScale;
        transform.localScale = Vector3.zero;
    }

    private void OnEnable()
    {
        StartCoroutine(GetMetadataObject(ipfsMetadataUrl));
        
        // We set the target position that we want
        Vector3 targetPos = new Vector3(transform.position.x, transform.position.y + 0.125f, transform.position.z - 0.2f);
        
        // We move the item to the target position using Tween. We also scale it to the initial scale
        Tween.Position(transform, transform.position, targetPos, 3f, 0, Tween.EaseOut);
        Tween.LocalScale(transform, _initScale, 3f, 0, Tween.EaseOut, Tween.LoopType.None, null, () =>
        {
            // We do it when we have retrieved all data from IPFS
        });
    }
    
    private IEnumerator GetMetadataObject(string metadataUrl)
    {
        // We create a GET UWR passing that JSON URL 
        using UnityWebRequest uwr = UnityWebRequest.Get(metadataUrl);
        
        yield return uwr.SendWebRequest();

        if (uwr.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(uwr.error);
            uwr.Dispose();
        }
        else
        {
            // If successful, we get the JSON content as a string
            var uwrContent = DownloadHandlerBuffer.GetContent(uwr);

            // Finally we need to convert that string to a MetadataObject
            metadataObject = JsonUtility.FromJson<MetadataObject>(uwrContent);
            StartCoroutine(GetImageSprite(metadataObject.image));

            uwr.Dispose();
        }
    }
    
    private IEnumerator GetImageSprite(string imageUrl)
    {
        using UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(imageUrl);
        
        yield return uwr.SendWebRequest();

        if (uwr.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(uwr.error);
            uwr.Dispose();
        }
        else
        {
            var tex = DownloadHandlerTexture.GetContent(uwr);
                
            // After getting the texture, we create a new sprite using the texture height (or width) to set the sprite's pixels for unit
            spriteRenderer.sprite = Sprite.Create(tex, new Rect(0.0f, 0.0f, tex.width, tex.height), new Vector2(0.5f, 0.5f), tex.height);
            
            // When the tween is completed, we enable the collider and we shout WE'RE READY!!
            _sphereCollider.enabled = true;
            Ready?.Invoke();
            
            uwr.Dispose();
        }
    }
}
