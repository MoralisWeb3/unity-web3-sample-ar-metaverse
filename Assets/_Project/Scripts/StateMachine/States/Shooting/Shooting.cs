using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pixelplacement;

public class Shooting : State
{
    public Transform originT;
    public GameObject laserShotPrefab;
    
    RaycastHit hit;
    float range = 1000.0f;
    
    public void Shoot()
    {
        Ray ray = Camera.main.ScreenPointToRay(new Vector2(Screen.width / 2f, Screen.height / 2f)); //Center of the screen
        if (Physics.Raycast(ray, out hit, range))
        {
            GameObject laser = Instantiate(laserShotPrefab, originT.position, Quaternion.identity);
            laser.GetComponent<ShotBehavior>().setTarget(hit.point);
            Destroy(laser, 2f);
        }
    }
}
