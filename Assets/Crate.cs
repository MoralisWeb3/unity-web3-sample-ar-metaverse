using UnityEngine;

public class Crate : MonoBehaviour
{
    private void OnEnable()
    {
        CrateButton.Triggered += Disarm;
    }

    private void OnDisable()
    {
        CrateButton.Triggered -= Disarm;
    }
    
    private void Disarm()
    {
        //TODO Destroy or open
    }
}
