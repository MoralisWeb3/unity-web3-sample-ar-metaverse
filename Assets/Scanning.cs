using System.Collections.Generic;
using UnityEngine;
using Pixelplacement;
using UnityEngine.XR.ARFoundation;

public class Scanning : State
{
    [SerializeField] private ARRaycastManager arRaycastManager;
    [SerializeField] private GameObject spawnablePrefab;
    
    private readonly List<ARRaycastHit> _raycastHits = new List<ARRaycastHit>();
    private Camera _arCamera;
    private GameObject _spawnedObject;

    private void Awake()
    {
        _arCamera = Camera.main;
        _spawnedObject = null;
    }

    void Update()
    {
        if (Input.touchCount == 0)
            return;

        RaycastHit hit;
        Ray ray = _arCamera.ScreenPointToRay(Input.GetTouch(0).position);

        if (arRaycastManager.Raycast(Input.GetTouch(0).position, _raycastHits))
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began && _spawnedObject == null)
            {
                if (Physics.Raycast(ray, out hit))
                {
                    if (hit.collider.gameObject.CompareTag("Spawnable"))
                    {
                        _spawnedObject = hit.collider.gameObject;
                    }
                    else
                    {
                        SpawnPrefab(_raycastHits[0].pose.position);
                    }
                }
            }
            else if (Input.GetTouch(0).phase == TouchPhase.Moved && _spawnedObject != null)
            {
                _spawnedObject.transform.position = _raycastHits[0].pose.position;
            }

            if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                _spawnedObject = null;
            }
        }
    }

    private void SpawnPrefab(Vector3 spawnPosition)
    {
        _spawnedObject = Instantiate(spawnablePrefab, spawnPosition, Quaternion.identity);
    }
}
