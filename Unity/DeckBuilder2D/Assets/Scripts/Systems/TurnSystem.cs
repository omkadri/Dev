using System.Collections;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class TurnSystem : Singleton<TurnSystem>
{
    [SerializeField] int _maxActionsPerTurn;

    [SerializeField] TextMeshProUGUI _remainingActionsText;

    [SerializeField] float _turnEndDelay;
    
    int _actionsRemaining;

    void Start()
    {
        _actionsRemaining = _maxActionsPerTurn;
        UpdateActionsUI();
    }

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
        ConsumeAction(cardData.ActionCost);
    }

    void ConsumeAction(int amount)
    {
        _actionsRemaining -= amount;
        UpdateActionsUI();
        if (_actionsRemaining <= 0)
        {
            TurnEvents.PlayerTurnEnd();
            Debug.Log("Player Turn Ending");
            StartCoroutine(EnemyTurnRoutine());
        }
    }

    IEnumerator EnemyTurnRoutine()
    {
        yield return new WaitForSeconds(_turnEndDelay);

        TurnEvents.EnemyTurnBegin();
        yield return new WaitForSeconds(_turnEndDelay);
        _actionsRemaining = _maxActionsPerTurn; //this ensures the player has actions on their next turn
        UpdateActionsUI();
        TurnEvents.PlayerTurnStart();
    }

    void UpdateActionsUI()
    {
        _remainingActionsText.text = "Remaining Actions: " + _actionsRemaining;
    }
}