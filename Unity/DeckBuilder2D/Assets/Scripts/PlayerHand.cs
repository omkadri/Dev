using System.Collections.Generic;
using UnityEngine;

public class PlayerHand : MonoBehaviour
{
    [SerializeField] Deck _deck;

    [SerializeField] Transform[] _cardSlots;

    [SerializeField] GameObject _cardPrefab;

    [SerializeField] int _startingHandSize = 2;

    List<Card> _cardsInHand = new List<Card>();

    void Start()
    {
        for (int i = 0; i < _startingHandSize; i++)
        {
            DrawNextCard();
        }
    }

    public void DrawNextCard()
    {
        if (_cardSlots == null || _cardsInHand.Count >= _cardSlots.Length)
        {
            Debug.Log("Hand is Full or Slots are Null");
            return;
        }

        CardData cardData = _deck.DrawCard();

        if (cardData == null)
        {
            Debug.Log("No Cards Left In Deck");
            return;
        }

        int slotIndex = _cardsInHand.Count;
        GameObject newCard = Instantiate(_cardPrefab, _cardSlots[slotIndex].position, Quaternion.identity);
        Card cardComponent = newCard.GetComponent<Card>();
        cardComponent.LoadCardData(cardData);
        _cardsInHand.Add(cardComponent);
        _cardsInHand[slotIndex].transform.SetParent(_cardSlots[slotIndex]);
    }
}