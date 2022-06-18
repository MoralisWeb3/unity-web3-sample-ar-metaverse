using UnityEngine;

public class Crate : MonoBehaviour
{
    [Header("Components")]
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private Animation anim;

    [Header("Particle Systems")]
    [SerializeField] private ParticleSystem smokePS;

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
        smokePS.Play();
        audioSource.Play();
        anim.Play();
    }

    public Transform GetCenterTransform()
    {
        return centerT;
    }
}
