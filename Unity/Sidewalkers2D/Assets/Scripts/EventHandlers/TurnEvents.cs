using System;
using UnityEngine;

public static class TurnEvents
{
    public static event Action OnPlayerTurnBegin;

    public static event Action OnPlayerTurnEnd;

    public static event Action OnEnemyTurnBegin;

    public static event Action OnEnemyTurnEnd;

    //BROADCASTERS
    public static void PlayerTurnEnd()
    {
        OnPlayerTurnEnd?.Invoke();
    }

    public static void PlayerTurnStart()
    {
        OnPlayerTurnBegin?.Invoke();
    }

    public static void EnemyTurnBegin()
    {
        OnEnemyTurnBegin?.Invoke();
    }

    public static void EnemyTurnEnd()
    {
        OnEnemyTurnEnd?.Invoke();
    }
}