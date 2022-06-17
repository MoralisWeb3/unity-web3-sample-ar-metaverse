using System;
using Pixelplacement;
using UnityEngine;

public class Opening : State
{
    [SerializeField] private MetaverseItem metaverseItem;
    
    private GameManager _gameManager;
    private Crate _crate;

    private Transform _originT;

    private void Awake()
    {
        _gameManager = GetComponentInParent<GameManager>();
    }

    private void OnEnable()
    {
        MetaverseItem.Ready += GoToViewing;
        
        var spawnedObject = _gameManager.GetSpawnedObject();

        try
        {
            _crate = spawnedObject.GetComponent<Crate>();
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
        
        _crate.Open();
        _originT = _crate.GetCenterTransform();

        Instantiate(metaverseItem, spawnedObject.transform);
    }
    
    private void OnDisable()
    {
        MetaverseItem.Ready -= GoToViewing;
    }

    private void GoToViewing(MetaverseItem item)
    {
        _gameManager.metaverseItem = item;
        ChangeState("Viewing");
    }
}
