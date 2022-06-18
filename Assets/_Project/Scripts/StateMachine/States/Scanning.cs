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
    
    [Header("UI Elements")]
    [SerializeField] private GameObject scanPanel;
    [SerializeField] private GameObject tapToPlacePanel;

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
            scanPanel.SetActive(true);
        }
        else
        {
            freeLookBehaviour.enabled = true;
            tapToPlacePanel.SetActive(true);
        }
    }

    private void OnDisable()
    {
        arPlaneManager.enabled = false;
        tapToPlacePanel.SetActive(false);
        scanPanel.SetActive(false);
    }

    void Update()
    {
        if (Application.isMobilePlatform)
        {
            //Ray infoRay = _arCamera.ScreenPointToRay(new Vector2(Screen.width / 2f, Screen.height / 2f));
            if (arRaycastManager.Raycast(new Vector2(Screen.width / 2f, Screen.height / 2f), _raycastHits))
            {
                tapToPlacePanel.SetActive(true);
                scanPanel.SetActive(false);
            }
            else
            {
                tapToPlacePanel.SetActive(false);
                scanPanel.SetActive(true);
            }

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
        _gameManager.PlaySpawnedObjectSound();
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
        _gameManager.PlaySpawnedObjectSound();
    }
}
