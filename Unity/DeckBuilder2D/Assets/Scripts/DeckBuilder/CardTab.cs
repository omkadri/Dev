using UnityEngine;
using TMPro;

public class CardTab : MonoBehaviour
{
    [SerializeField] TextMeshPro _cardNameText;

    [SerializeField] TextMeshPro _actionCostText;

    [SerializeField] SpriteRenderer _illustrationRenderer;

    public void LoadCardTabData(CardData cardData)
    {
        _cardNameText.text = cardData.CardName;
        _actionCostText.text = cardData.ActionCost.ToString();
        _illustrationRenderer.sprite = cardData.Illustration;
    }
}
