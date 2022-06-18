using System;
using System.Collections;
using System.Numerics;
using Cysharp.Threading.Tasks;
using MoralisUnity;
using Nethereum.Hex.HexTypes;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using WalletConnectSharp.Unity;
using State = Pixelplacement.State;

public class Minting : State
{
    [Header("WalletConnect")] 
    [SerializeField] private WalletConnect walletConnect;

    [Header("UI Elements")]
    [SerializeField] private Button openWalletButton;
    [SerializeField] private TextMeshProUGUI statusText;

    private GameManager _gameManager;

    private BigInteger _currentTokenId;

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
            _gameManager.isItemMinted = false;
            
            ChangeState("Viewing");
            return;
        }
    
        statusText.text = "Transaction completed!";
        _gameManager.itemTokenId = _currentTokenId.ToString();
        _gameManager.isItemMinted = true;
        
        ChangeState("Viewing");
    }
    
    private async UniTask<string> ExecuteMinting(string metadataUrl)
    {
        // Dummy TokenId based on current time.
        long currentTime = DateTime.Now.Ticks;
        _currentTokenId = new BigInteger(currentTime);
        
        object[] parameters = {
            _currentTokenId.ToString("x"), // This is the format the contract expects
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
