using UnityEngine;
using System.Collections;

public class FlickeringLights : MonoBehaviour {
	
	public Light flashingLight;
	// public Light secondFlashingLight;
	private float randomNumber;
	public float speed = 0.95f;
	
	void Start(){
		
		flashingLight.enabled = false;
		//secondFlashingLight.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		
		randomNumber = Random.value;
		
		if (randomNumber <= speed) {
			
			flashingLight.enabled = true;
			// secondFlashingLight.enabled = true;
		} else {
			
			flashingLight.enabled = false;
			//  secondFlashingLight.enabled = false;
			
		}
		
	}
}﻿