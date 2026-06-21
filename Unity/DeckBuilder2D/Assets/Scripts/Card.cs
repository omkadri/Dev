using TMPro;
using UnityEngine;

public class Card : MonoBehaviour
{
    [SerializeField] TextMeshPro _cardNameText;

    [SerializeField] TextMeshPro _actionCostText;

    [SerializeField] SpriteRenderer _illustrationRenderer;

    [SerializeField] TextMeshPro _descriptionText;

    [SerializeField] CardData _tempCardData;

    void Start()
    {
        LoadCardData(_tempCardData);
    }

    public void LoadCardData(CardData cardData)
    {
        _cardNameText.text = cardData.CardName;
        _actionCostText.text = cardData.ActionCost.ToString();
        _illustrationRenderer.sprite = cardData.Illustration;
        _descriptionText.text = cardData.Description;
    }
}