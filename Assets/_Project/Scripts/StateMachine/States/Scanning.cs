using System;
using System.Collections.Generic;
using UnityEngine;
using Pixelplacement;
using UnityEngine.XR.ARFoundation;

public class Scanning : State
{
    [Header("AR Related")]
    [SerializeField] private ARSessionOrigin arSessionOrigin;
    [SerializeField] private ARRaycastManager arRaycastManager;
    [SerializeField] private ARPlaneManager arPlaneManager;
    
    [Header("Spawnable Prefab")]
    [SerializeField] private GameObject cratePrefab;

    private GameManager _gameManager;
    private readonly List<ARRaycastHit> _raycastHits = new List<ARRaycastHit>();
    private Camera _arCamera;

    private void Awake()
    {
        //Assuming we're child of the GameManager
        _gameManager = GetComponentInParent<GameManager>();
    }

    private void OnEnable()
    {
        _arCamera = arSessionOrigin.camera;
        arPlaneManager.enabled = true;
    }

    private void OnDisable()
    {
        arPlaneManager.enabled = false;
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
                    ChangeState("Shooting");
                }
            }
        }
    }

    private void SpawnPrefab(Vector3 spawnPosition)
    {
        GameObject obj = Instantiate(cratePrefab, spawnPosition, Quaternion.identity);
        _gameManager.SetSpawnedObject(obj);
    }
}
