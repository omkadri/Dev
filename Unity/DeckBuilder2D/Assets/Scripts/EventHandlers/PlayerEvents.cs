using System;
using UnityEngine;

public static class PlayerEvents
{
    public static event Action<CardData> OnCardPlayed;
    public static event Action<int> OnPlayerHit;

    public static void CardPlayed(CardData cardData)
    {
        OnCardPlayed?.Invoke(cardData);
    }

    public static void PlayerHit(int damage)
    {
        OnPlayerHit?.Invoke(damage);
    }
}