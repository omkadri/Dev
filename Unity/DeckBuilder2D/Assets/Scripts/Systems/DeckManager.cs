using System.Collections.Generic;
using UnityEngine;

public class DeckManager : Singleton<DeckManager>
{
    [SerializeField] List<CardData> _currentDeck = new List<CardData>();

    [SerializeField] int _maxDeckSize = 9;

    void OnEnable()
    {
        DeckEvents.OnAddCardToDeck += AddCard;
        DeckEvents.OnRemoveCardFromDeck += RemoveCard;
    }

    void OnDisable()
    {
        DeckEvents.OnAddCardToDeck -= AddCard;
        DeckEvents.OnRemoveCardFromDeck -= RemoveCard;
    }

    void AddCard(CardData cardData)
    {
        if (_currentDeck.Count >= _maxDeckSize)
        {
            Debug.Log("Deck is full!");
            return;
        }
        _currentDeck.Add(cardData);
        DeckEvents.DeckProcessed();
    }

    void RemoveCard(CardData cardData)
    {
        _currentDeck.Remove(cardData);
        DeckEvents.DeckProcessed();
    }

    public List<CardData> GetDeck()
    {
        return _currentDeck;
    }
}
