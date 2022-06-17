using UnityEngine;
using Pixelplacement;

public class MetaverseItem : MonoBehaviour
{
    private Vector3 _initScale;

    private void Awake()
    {
        _initScale = transform.localScale;
        transform.localScale = Vector3.zero;
    }

    private void OnEnable()
    {
        var myTransform = transform;
        
        Tween.Position(myTransform, myTransform.position, new Vector3(myTransform.position.x, myTransform.position.y + 0.25f, myTransform.position.z), 3f, 0);
        Tween.LocalScale(transform, _initScale, 3f, 0);
    }
}
