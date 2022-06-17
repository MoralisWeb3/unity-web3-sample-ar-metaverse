using System;
using UnityEngine;
using Pixelplacement;

[RequireComponent(typeof(SphereCollider))]
public class MetaverseItem : MonoBehaviour
{
    // Events
    public static Action Ready;
    
    // Components
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
        // We set the target position that we want
        Vector3 targetPos = new Vector3(transform.position.x, transform.position.y + 0.125f, transform.position.z - 0.2f);
        
        // We move the item to the target position using Tween. We also scale it to the initial scale
        Tween.Position(transform, transform.position, targetPos, 3f, 0, Tween.EaseOut);
        Tween.LocalScale(transform, _initScale, 3f, 0, Tween.EaseOut, Tween.LoopType.None, null, () =>
        {
            // When the tween is completed, we enable the collider and we shout WE'RE READY!!
            _sphereCollider.enabled = true;
            Ready?.Invoke();
        });
    }
}
