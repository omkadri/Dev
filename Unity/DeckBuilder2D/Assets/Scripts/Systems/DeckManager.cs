using System.Collections.Generic;
using UnityEngine;

public class DeckManager : Singleton<DeckManager>
{
    [SerializeField] List<CardData> _currentDeck = new List<CardData>();

    [SerializeField] int _maxDeckSize = 9;

    [SerializeField] DeckPreset _deckPreset;

    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);

        _currentDeck = new List<CardData>(_deckPreset.Cards);
    }

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
        return new List<CardData>(_currentDeck); 
        //we are returning a copy of the deck instead of a reference, because passing the reference will cause a bug with the way cards are displayed between scenes
    }
}
