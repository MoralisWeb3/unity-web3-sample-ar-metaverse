using UnityEngine;
using Pixelplacement;

public class GameManager : StateMachine
{
    [HideInInspector] public GameObject spawnedObject;

    public void SetSpawnedObject(GameObject obj)
    {
        spawnedObject = obj;
    }
}
