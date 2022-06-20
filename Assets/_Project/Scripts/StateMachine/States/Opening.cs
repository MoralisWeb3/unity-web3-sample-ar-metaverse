using System;
using Pixelplacement;
using UnityEngine;

public class Opening : State
{
    [SerializeField] private MetaverseItem metaverseItem;
    
    private GameManager _gameManager;
    private LootBox _lootBox;

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
            _lootBox = spawnedObject.GetComponent<LootBox>();
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
        
        _lootBox.Open();
        _originT = _lootBox.GetCenterTransform();

        Instantiate(metaverseItem, spawnedObject.transform);
    }
    
    private void OnDisable()
    {
        MetaverseItem.Ready -= GoToViewing;
    }

    private void GoToViewing(MetaverseItem item)
    {
        _gameManager.currentMetaverseItem = item;
        ChangeState("Viewing");
    }
}
