using Pixelplacement;
using UnityEngine;

public class Viewing : State
{ 
    private RaycastHit _hit;
    private const float Range = 1000.0f;
    
    private void OnEnable()
    {
        
    }

    private void Update()
    {
        if (Camera.main is null)
            return;
        
        if (Application.isMobilePlatform)
        {
            if (Input.touchCount == 0)
                return;

            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            
            if (Physics.Raycast(ray, out var hit, 100f))
            {
                if (hit.collider.gameObject.CompareTag("MetaverseItem")) // We hit the item!
                {
                    ChangeState("Inspecting");
                }
            }
        }
        else
        {
            if (Input.GetMouseButtonDown(0))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            
                if (Physics.Raycast(ray, out _hit, Range))
                {
                    if (_hit.collider.gameObject.CompareTag("MetaverseItem")) // We hit the item!
                    {
                        ChangeState("Inspecting");
                    }
                }
            }
        }
    }

    private void OnDisable()
    {
        
    }
}
