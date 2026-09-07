using UnityEngine;
using TMPro;

public class CardTab : MonoBehaviour
{
    [SerializeField] TextMeshPro _cardNameText;

    [SerializeField] TextMeshPro _actionCostText;

    [SerializeField] SpriteRenderer _illustrationRenderer;

    CardData _cardData;

    public void LoadCardTabData(CardData cardData)
    {
        this._cardData = cardData;
        _cardNameText.text = cardData.CardName;
        _actionCostText.text = cardData.ActionCost.ToString();
        _illustrationRenderer.sprite = cardData.Illustration;
    }

    void OnMouseDown()
    {
        DeckEvents.RemoveCardFromDeck(_cardData);
    }
}
