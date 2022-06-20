using System;
using UnityEngine;

public class LootBoxButton : MonoBehaviour
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
