using Pixelplacement;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using WalletConnectSharp.Unity;

public class Inspecting : State
{
    [Header("WalletConnect")]
    [SerializeField] private WalletConnect walletConnect;
    
    [Header("UI Elements")]
    [SerializeField] private TextMeshProUGUI nameLabel;
    [SerializeField] private TextMeshProUGUI descriptionLabel;
    [SerializeField] private Image imageLabel;
    
    [Header("Buttons")]
    [SerializeField] private GameObject mintButton;
    [SerializeField] private GameObject mintedButton;
    [SerializeField] private GameObject copyButtons;

    private GameManager _gameManager;

    private void Awake()
    {
        _gameManager = GetComponentInParent<GameManager>(); // We assume we're under GameManager
    }

    private void OnEnable()
    {
        nameLabel.text = _gameManager.metaverseItem.metadataObject.name;
        descriptionLabel.text = _gameManager.metaverseItem.metadataObject.description;
        imageLabel.sprite = _gameManager.metaverseItem.spriteRenderer.sprite;

        if (_gameManager.isItemMinted)
        {
            mintButton.SetActive(false);
            mintedButton.SetActive(true);
            
            copyButtons.SetActive(true);
        }
        else
        {
            mintButton.SetActive(true);
            mintedButton.SetActive(false);
            
            copyButtons.SetActive(false);
        }
    }

    public void GoToViewing()
    {
        ChangeState("Viewing");
    }

    public void GoToMinting()
    {
        ChangeState("Minting");
    }

    public void CopyContractAddress()
    {
        GameManager.ContractAddress.CopyToClipboard();
    }

    public void CopyTokenId()
    {
        _gameManager.itemTokenId.CopyToClipboard();
    }
}
