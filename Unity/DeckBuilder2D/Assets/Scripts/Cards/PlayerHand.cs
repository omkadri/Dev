using System.Collections.Generic;
using UnityEngine;

public class PlayerHand : MonoBehaviour
{
    [SerializeField] Deck _deck;

    [SerializeField] Transform[] _cardSlots;

    [SerializeField] GameObject _cardPrefab;

    [SerializeField] int _startingHandSize = 2;

    [SerializeField] DiscardPile _discardPile;

    List<Card> _cardsInHand = new List<Card>();

    void Start()
    {
        for (int i = 0; i < _startingHandSize; i++)
        {
            DrawNextCard();
        }
    }

    void OnEnable()
    {
        TurnEvents.OnPlayerTurnEnd += DisableHand;
        TurnEvents.OnPlayerTurnBegin += EnableHand;
    }

    void OnDisable()
    {
        TurnEvents.OnPlayerTurnEnd -= DisableHand;
        TurnEvents.OnPlayerTurnBegin -= EnableHand;
    }

    void DisableHand()
    {
        foreach (Card card in _cardsInHand)
        {
            card.SetInteractable(false);
        }
    }

    void EnableHand()
    {
        foreach (Card card in _cardsInHand)
        {
            card.SetInteractable(true);
        }
    }

    void RepositionCards()
    {
        //unparent each card from current slot
        for(int i = 0; i < _cardsInHand.Count; i++)
        {
            _cardsInHand[i].transform.SetParent(null);
        }

        //reparent each card to new slot
        for(int i = 0; i < _cardsInHand.Count; i++)
        {
            _cardsInHand[i].transform.SetParent(_cardSlots[i]);
            _cardsInHand[i].transform.position = _cardSlots[i].position;
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

    public void PlayCard(Card card)
    {
        _cardsInHand.Remove(card);
        _discardPile.DiscardCard(card.GetCardData());
        Destroy(card.gameObject);
        RepositionCards();
        PlayerEvents.CardPlayed(card.GetCardData());
    }
}