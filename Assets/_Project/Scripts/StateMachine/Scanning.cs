using System;
using System.Collections.Generic;
using UnityEngine;
using Pixelplacement;
using UnityEngine.XR.ARFoundation;

public class Scanning : State
{
    [Header("AR Related")]
    [SerializeField] private GameObject arObject;
    [SerializeField] private ARRaycastManager arRaycastManager;
    
    [Header("Spawnable Prefab")]
    [SerializeField] private GameObject cratePrefab;
    
    private readonly List<ARRaycastHit> _raycastHits = new List<ARRaycastHit>();
    private Camera _arCamera;

    private void Awake()
    {
        _arCamera = Camera.main;
    }

    private void OnEnable()
    {
        arObject.SetActive(true);
    }

    void Update()
    {
        if (Input.touchCount == 0)
            return;

        RaycastHit hit;
        Ray ray = _arCamera.ScreenPointToRay(Input.GetTouch(0).position);

        if (arRaycastManager.Raycast(Input.GetTouch(0).position, _raycastHits))
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                if (Physics.Raycast(ray, out hit))
                {
                    SpawnPrefab(_raycastHits[0].pose.position);
                }
            }
        }
    }

    private void SpawnPrefab(Vector3 spawnPosition)
    {
        Instantiate(cratePrefab, spawnPosition, Quaternion.identity);
    }
}
