using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pixelplacement;

public class Shooting : State
{
    public Transform originT;
    public GameObject laserShotPrefab;
    
    public float shootRate;
    private float _shootRateTimeStamp;
    
    RaycastHit hit;
    float range = 1000.0f;
    
    public void Shoot()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out hit, range))
        {
            GameObject laser = Instantiate(laserShotPrefab, transform.position, transform.rotation);
            //laser.GetComponent<LaserBehaviour>().setTarget(hit.point);
            Destroy(laser, 2f);
        }
    }
}
