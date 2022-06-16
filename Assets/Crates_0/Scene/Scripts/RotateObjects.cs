using UnityEngine;
using System.Collections;

public class RotateObjects : MonoBehaviour {

	public float speedX = 0f;
	public float speedY = 0f;
	public float speedZ = 0f;
	
	// Update is called once per frame
	void Update () {
		transform.Rotate(speedX * Time.deltaTime, speedY * Time.deltaTime, speedZ * Time.deltaTime);
	
	}


}
