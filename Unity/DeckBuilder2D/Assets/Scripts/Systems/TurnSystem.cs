using System.Collections;
using Unity.VisualScripting;
using UnityEngine;

public class TurnSystem : Singleton<TurnSystem>
{
    [SerializeField] float _turnEndDelay;
    void OnEnable()
    {
        PlayerEvents.OnCardPlayed += CardPlayed;
    }

    void OnDisable()
    {
        PlayerEvents.OnCardPlayed -= CardPlayed;
    }

    void CardPlayed(CardData cardData)
    {
        TurnEvents.PlayerTurnEnd();
        Debug.Log("Player Turn Ending");
        StartCoroutine(EnemyTurnRoutine());
    }

    IEnumerator EnemyTurnRoutine()
    {
        yield return new WaitForSeconds(_turnEndDelay);
        Debug.Log("Enemy Turn Beginning");
        TurnEvents.EnemyTurnBegin();
        yield return new WaitForSeconds(_turnEndDelay);
        Debug.Log("Player Turn Beginning");
        TurnEvents.PlayerTurnStart();
    }
}