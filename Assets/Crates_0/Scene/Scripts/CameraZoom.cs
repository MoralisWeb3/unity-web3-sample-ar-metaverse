using UnityEngine;
using System.Collections;

public class CameraZoom : MonoBehaviour {

	public float position = 1;
	
	// Update is called once per frame
	void Update () {
		//transform.Rotate(0, speed * Time.deltaTime, 0);
		//transform.localPosition(0 ,0 ,0);
		transform.localPosition = new Vector3(-position, position, position);
	
	}
	public void AdjustPosition(float newPosition) {
		position = newPosition;
	}

}
