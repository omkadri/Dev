using System.Collections;
using Unity.VisualScripting;
using UnityEngine;

public class TurnSystem : MonoBehaviour
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
        yield return new WaitForSeconds(_turnEndDelay);//TODO: Magic Number
        Debug.Log("Enemy Turn Beginning");
        TurnEvents.EnemyTurnBegin();
    }
}