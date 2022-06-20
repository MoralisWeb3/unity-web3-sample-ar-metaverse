using UnityEngine;
using Pixelplacement;
using UnityEngine.SceneManagement;

public class GameManager : StateMachine
{
    [Header("Smart Contract Data")]
    public const string ContractAddress = "";
    public const string ContractAbi = "";
    
    [HideInInspector] public GameObject currentLootBox;
    [HideInInspector] public MetaverseItem currentMetaverseItem;

    [HideInInspector] public bool isItemMinted;
    [HideInInspector] public string itemTokenId;
    
    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }

    public void SetCurrentLootBox(GameObject obj)
    {
        currentLootBox = obj;
    }

    public GameObject GetCurrentLootBox()
    {
        if (currentLootBox is null)
        {
            Debug.Log("No loot box spawned!");
            return null;
        }
        
        return currentLootBox;
    }
}
