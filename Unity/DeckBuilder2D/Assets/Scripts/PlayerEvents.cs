using System;
using UnityEngine;

public class PlayerEvents : MonoBehaviour //TODO: is MonoBehaviour necessary?
{
    public static event Action<CardData> OnCardPlayed;

    public static void CardPlayed(CardData cardData)
    {
        OnCardPlayed?.Invoke(cardData);
    }
}