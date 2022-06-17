using UnityEngine;

public class Crate : MonoBehaviour
{
    [Header("Components")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private Animation anim;
    
    private void OnEnable()
    {
        CrateButton.Triggered += Open;
    }

    private void OnDisable()
    {
        CrateButton.Triggered -= Open;
    }
    
    private void Open()
    {
        //TODO Destroy or open
        audioSource.Play();
        anim.Play();
    }
}
