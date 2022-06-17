using UnityEngine;
using Pixelplacement;

public class Shooting : State
{
    public Transform originT;
    public GameObject laserShotPrefab;

    // Components
    private AudioSource _as;
    
    // Raycast
    private RaycastHit _hit;
    private const float Range = 1000.0f;

    private void Awake()
    {
        _as = GetComponent<AudioSource>();
    }
    
    public void Shoot()
    {
        if (Application.isEditor)
        {
            // To facilitate debug
            if (Input.GetKeyDown(KeyCode.O)) // TODO Enable old input system
            {
                ChangeState("Opening"); 
            }
        }

        if (Camera.main is null)
            return;
        
        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2f, Screen.height / 2f)); //Center of the screen
        if (Physics.Raycast(ray, out _hit, Range))
        {
            _as.Play();
            
            GameObject laser = Instantiate(laserShotPrefab, originT.position, originT.transform.rotation);
            laser.GetComponent<ShotBehavior>().SetTarget(_hit.point);
            Destroy(laser, 2f);

            if (_hit.collider.gameObject.CompareTag("CrateButton")) // We hit the button! //TODO This!!!!!!
            {
                ChangeState("Opening");
            }
        }
    }
}
