using UnityEngine;

public class Crate : MonoBehaviour
{
    [Header("Components")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private Animation anim;

    [Header("Other")]
    [SerializeField] private Transform centerT;
    
    private void OnEnable()
    {
        CrateButton.Triggered += Open;
    }

    private void OnDisable()
    {
        CrateButton.Triggered -= Open;
    }
    
    public void Open()
    {
        //TODO Destroy or open
        audioSource.Play();
        anim.Play();
    }

    public Transform GetCenterTransform()
    {
        return centerT;
    }
}
