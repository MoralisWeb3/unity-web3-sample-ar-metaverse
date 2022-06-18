using System.Collections;
using Cysharp.Threading.Tasks;
using MoralisUnity;
using Nethereum.Hex.HexTypes;
using Pixelplacement;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using WalletConnectSharp.Unity;

public class Minting : State
{
    [Header("WalletConnect")] 
    [SerializeField] private WalletConnect walletConnect;

    [Header("UI Elements")]
    [SerializeField] private Button openWalletButton;
    [SerializeField] private TextMeshProUGUI statusText;

    private GameManager _gameManager;

    private void Awake()
    {
        _gameManager = GetComponentInParent<GameManager>();
    }

    private void OnEnable()
    {
        if (_gameManager is null)
        {
            Debug.LogError("Null. I need the GameManager to work.");
            return;
        }
        
        if (GameManager.ContractAddress == string.Empty || GameManager.ContractAbi == string.Empty)
        {
            Debug.LogError("You need the Contract Address AND the ABI to continue!");
            return;
        }
        
        MintNft(_gameManager.metaverseItem.ipfsMetadataUrl);
    }
    
    private async void MintNft(string metadataUrl)
    {
        statusText.text = "Please confirm transaction in your wallet";
        
        var result = await ExecuteMinting(metadataUrl);

        if (result is null)
        {
            statusText.text = "Transaction failed";
            ChangeState("Viewing");
            return;
        }
    
        statusText.text = "Transaction completed!";
        ChangeState("Viewing");
    }
    
    private async UniTask<string> ExecuteMinting(string metadataUrl)
    {
        object[] parameters = {
            metadataUrl
        };

        // Set gas estimate
        HexBigInteger value = new HexBigInteger(0);
        HexBigInteger gas = new HexBigInteger(0);
        HexBigInteger gasPrice = new HexBigInteger(0);
        
        if (Application.isMobilePlatform)
        {
            // TODO
            // A little trick for the code to continue and call ExecuteContractFunction, and then opening the mobile wallet :)
            Invoke(nameof(OpenMobileWallet), 2f);
        }

        string resp = await Moralis.ExecuteContractFunction(GameManager.ContractAddress, GameManager.ContractAbi, "mintItem", parameters, value, gas, gasPrice);

        return resp;
    }

    private void OpenMobileWallet()
    {
        walletConnect.OpenMobileWallet();
    }
}
