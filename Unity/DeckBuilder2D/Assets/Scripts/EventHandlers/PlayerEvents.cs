using System;
using UnityEngine;

public static class PlayerEvents
{
    public static event Action<CardData> OnCardPlayed;

    public static void CardPlayed(CardData cardData)
    {
        OnCardPlayed?.Invoke(cardData);
    }
}