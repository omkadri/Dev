using System.Collections;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class TurnSystem : Singleton<TurnSystem>
{
    [SerializeField] int _maxActionsPerTurn;

    [SerializeField] int _drawCost = 1;

    [SerializeField] int _reshuffleCost = 3;

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
        PlayerEvents.OnDrawCardRequested += DrawRequested;
        PlayerEvents.OnReshuffleRequested += ReshuffleRequested;
    }

    void OnDisable()
    {
        PlayerEvents.OnCardPlayed -= CardPlayed;
        PlayerEvents.OnDrawCardRequested -= DrawRequested;
        PlayerEvents.OnReshuffleRequested -= ReshuffleRequested;
    }

    void CardPlayed(CardData cardData)
    {
        ConsumeAction(cardData.ActionCost);
    }

    void DrawRequested()
    {
        ConsumeAction(_drawCost);
    }

    void ReshuffleRequested()
    {
        ConsumeAction(_reshuffleCost);
    }

    public bool HasActionsRemaining()
    {
        return _actionsRemaining > 0;
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
        if (_actionsRemaining < 0)
        {
            _actionsRemaining = 0;
        }
        _remainingActionsText.text = "Remaining Actions: " + _actionsRemaining;
    }
}