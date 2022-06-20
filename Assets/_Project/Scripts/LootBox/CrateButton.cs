using System;
using UnityEngine;

public class CrateButton : MonoBehaviour
{
    public static Action Triggered;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("LaserShot"))
        {
            Triggered?.Invoke();
        }
    }
}
