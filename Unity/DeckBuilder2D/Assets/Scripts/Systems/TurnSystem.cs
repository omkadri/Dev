using System.Collections;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class TurnSystem : Singleton<TurnSystem>
{
    enum TurnState {PlayerTurn, EnemyTurn}

    TurnState _currentTurn = TurnState.PlayerTurn;

    [SerializeField] int _maxActionsPerTurn;

    [SerializeField] int _drawCost = 1;

    [SerializeField] int _reshuffleCost = 3;

    [SerializeField] TextMeshProUGUI _remainingActionsText;

    [SerializeField] float _turnEndDelay;
    
    int _actionsRemaining;

    void Start()
    {
        StartPlayerTurn();
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

    void StartPlayerTurn()
    {
        Debug.Log("Player Turn Starting");
        _currentTurn = TurnState.PlayerTurn;
        _actionsRemaining = _maxActionsPerTurn;
        UpdateActionsUI();
        TurnEvents.PlayerTurnStart();
    }

    void EndPlayerTurn()
    {
        Debug.Log("Player Turn Ending");
        TurnEvents.PlayerTurnEnd();
        StartCoroutine(WaitBetweenTurnsRoutine());
    }

    void StartEnemyTurn()
    {
        Debug.Log("Enemy Turn Starting");
        _currentTurn = TurnState.EnemyTurn;
        EnemyTurn();
    }

    void EndEnemyTurn()
    {
        Debug.Log("Enemy Turn Ending");
        TurnEvents.EnemyTurnEnd();
        StartCoroutine(WaitBetweenTurnsRoutine())
;    }

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
            EndPlayerTurn();
        }
    }

    void EnemyTurn()
    {
        TurnEvents.EnemyTurnBegin();
        EndEnemyTurn();
    }

    void UpdateActionsUI()
    {
        if (_actionsRemaining < 0)
        {
            _actionsRemaining = 0;
        }
        _remainingActionsText.text = "Remaining Actions: " + _actionsRemaining;
    }

    IEnumerator WaitBetweenTurnsRoutine()
    {
        yield return new WaitForSeconds(_turnEndDelay);
        if (GameManager.Instance.IsGameActive())
        {
            if (_currentTurn != TurnState.PlayerTurn)
            {
                StartPlayerTurn();
            }
            else
            {
                StartEnemyTurn();
            }
        }
    }
}