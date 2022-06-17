using System;
using Pixelplacement;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Inspecting : State
{
    [Header("UI Elements")]
    [SerializeField] private TextMeshProUGUI nameLabel;
    [SerializeField] private TextMeshProUGUI descriptionLabel;
    [SerializeField] private Image imageLabel;

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
    }

    public void GoToMinting()
    {
        ChangeState("Minting");
    }
}
