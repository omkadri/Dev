using System.Collections.Generic;
using UnityEngine;

public class Deck : MonoBehaviour
{
    [SerializeField] List<CardData> _drawPile = new List<CardData>();

    [SerializeField] GameObject _cardBack;

    const float VERTICAL_SPACING = 0.1f;

    void Start()
    {
        DeckDrawVisuals();
    }

    public CardData DrawCard()
    {
        if (_drawPile.Count > 0)
        {
            //Draw and Remove Top Card
            int topIndex = _drawPile.Count - 1;
            CardData data = _drawPile[topIndex];
            _drawPile.RemoveAt(topIndex);
            return data;
        }
        return null;
    }

    void DeckDrawVisuals()
    {
        for (int i = 0; i < _drawPile.Count; i++)
        {
            GameObject newCardBack = Instantiate(_cardBack, transform);

            newCardBack.transform.localPosition = new Vector3(0f, -i * VERTICAL_SPACING, 0f);
        }
    }
}