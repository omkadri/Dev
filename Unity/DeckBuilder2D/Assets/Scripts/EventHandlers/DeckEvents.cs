using System;
using UnityEngine;

public class DeckEvents
{
    public static event Action<CardData> OnRemoveCardFromDeck;

    public static void RemoveCardFromDeck(CardData card)
    {
        OnRemoveCardFromDeck?.Invoke(card);
    }
}
