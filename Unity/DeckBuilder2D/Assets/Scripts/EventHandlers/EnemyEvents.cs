using System;

public static class EnemyEvents
{
    public static event Action<CardData> OnEnemyHit;

    public static void EnemyHit(CardData cardData)
    {
        OnEnemyHit?.Invoke(cardData);
    }
}