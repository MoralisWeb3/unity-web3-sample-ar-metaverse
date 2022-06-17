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

    [Header("Editor Debug")] [SerializeField]
    private FreeLookBehaviour freeLookBehaviour;

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

        if (Application.isMobilePlatform)
        {
            arPlaneManager.enabled = true;
        }
        else
        {
            freeLookBehaviour.enabled = true;
        }
    }

    private void OnDisable()
    {
        arPlaneManager.enabled = false;
    }

    void Update()
    {
        if (Application.isMobilePlatform)
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
        else
        {
            if (Input.GetMouseButtonDown(0))
            {
                DebugSpawnPrefab();
                ChangeState("Shooting");
            }
        }
    }

    private void SpawnPrefab(Vector3 spawnPosition)
    {
        GameObject obj = Instantiate(cratePrefab, spawnPosition, Quaternion.identity);
        
        Vector3 rot = Quaternion.LookRotation(_arCamera.transform.position - obj.transform.position).eulerAngles;
        rot.x = rot.z = 0;
        obj.transform.rotation = Quaternion.Euler(rot);

        _gameManager.SetSpawnedObject(obj);
    }
    
    private void DebugSpawnPrefab()
    {
        var spawnPos = new Vector3(_arCamera.transform.position.x, _arCamera.transform.position.y,
            _arCamera.transform.position.z + 0.5f);
        
        GameObject obj = Instantiate(cratePrefab, spawnPos, Quaternion.identity);
        
        Vector3 rot = Quaternion.LookRotation(_arCamera.transform.position - obj.transform.position).eulerAngles;
        rot.x = rot.z = 0;
        obj.transform.rotation = Quaternion.Euler(rot);

        _gameManager.SetSpawnedObject(obj);
    }
}
