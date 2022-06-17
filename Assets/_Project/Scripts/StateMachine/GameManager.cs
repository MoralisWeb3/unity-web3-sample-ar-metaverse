using System;
using UnityEngine;
using Pixelplacement;

public class GameManager : StateMachine
{
    [Header("Smart Contract Data")]
    public const string ContractAddress = "";
    public const string ContractAbi = "";
    
    [HideInInspector] public GameObject spawnedObject;
    [HideInInspector] public MetaverseItem metaverseItem;

    private AudioSource _audioSource;
    
    private void Awake()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    public void GoToAuthenticating()
    {
        ChangeState("Authenticating");
    }
    
    public void SetSpawnedObject(GameObject obj)
    {
        spawnedObject = obj;
    }

    public GameObject GetSpawnedObject()
    {
        if (spawnedObject is null)
        {
            Debug.Log("No spawned gameObject!");
            return null;
        }
        
        return spawnedObject;
    }

    public void PlaySpawnedObjectSound()
    {
        _audioSource.Play();
    }
}
