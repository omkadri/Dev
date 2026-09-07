using UnityEngine;
using TMPro;

public class CardTab : MonoBehaviour
{
    [SerializeField] TextMeshPro _cardNameText;

    [SerializeField] TextMeshPro _actionCostText;

    [SerializeField] Color _highlightColor;

    [SerializeField] SpriteRenderer _cardBase;

    [SerializeField] SpriteRenderer _illustrationRenderer;

    CardData _cardData;

    Color _originalColor;

    void Start()
    {
        _originalColor = _cardBase.color;
    }

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

    void OnMouseEnter()
    {
        _cardBase.color = _highlightColor;
    }

    void OnMouseExit()
    {
        _cardBase.color = _originalColor;
    }
}
