using UnityEngine;
using Pixelplacement;
using UnityEngine.UI;

public class Shooting : State
{
    public Transform originT;
    public GameObject laserShotPrefab;

    [Header("UI Elements")]
    public Button shootButton;
    
    // Components
    private AudioSource _as;
    
    // Raycast
    private RaycastHit _hit;
    private const float Range = 1000.0f;

    private void Awake()
    {
        _as = GetComponent<AudioSource>();
    }

    private void OnEnable()
    {
        ShotBehavior.TargetHit += OnTargetHit;
    }

    private void OnDisable()
    {
        ShotBehavior.TargetHit -= OnTargetHit;
    }
    
    public void Shoot()
    {
        if (Camera.main is null)
            return;
        
        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2f, Screen.height / 2f)); //Center of the screen
        if (Physics.Raycast(ray, out _hit, Range))
        {
            shootButton.interactable = false;
            _as.Play();
            
            GameObject laser = Instantiate(laserShotPrefab, originT.position, originT.transform.rotation);
            laser.GetComponent<ShotBehavior>().SetTarget(_hit.point);
            //Destroy(laser, 2f);
        }
    }
    
    private void OnTargetHit()
    {
        shootButton.interactable = true;
        
        if (_hit.collider.gameObject.CompareTag("LootBoxButton"))
        {
            ChangeState("Opening");
        }
    }

}
