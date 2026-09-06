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

    [SerializeField] int _TurnEndDelay = 3;

    [SerializeField] float _enemyTurnDelay = 1f;

    [SerializeField] TextMeshProUGUI _turnStateDisplay;
    
    int _actionsRemaining;

    void Start()
    {
        _turnStateDisplay.text = "Player's Turn"; //TODO: Serialize???
        StartPlayerTurn();
    }

    void OnEnable()
    {
        PlayerEvents.OnCardPlayed += CardPlayed;
        PlayerEvents.OnDrawCardRequested += DrawRequested;
        PlayerEvents.OnReshuffleRequested += ReshuffleRequested;
        PlayerEvents.OnPlayerDeath += ClearTurnDisplay;
        EnemyEvents.OnEnemyDeath += ClearTurnDisplay;
    }

    void OnDisable()
    {
        PlayerEvents.OnCardPlayed -= CardPlayed;
        PlayerEvents.OnDrawCardRequested -= DrawRequested;
        PlayerEvents.OnReshuffleRequested -= ReshuffleRequested;
        PlayerEvents.OnPlayerDeath -= ClearTurnDisplay;
        EnemyEvents.OnEnemyDeath -= ClearTurnDisplay;
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

    IEnumerator StartEnemyTurnRoutine()
    {
        Debug.Log("Enemy Turn Starting");
        _currentTurn = TurnState.EnemyTurn;
        yield return new WaitForSeconds(_enemyTurnDelay);
        EnemyTurn();
    }

    IEnumerator EndEnemyTurnRoutine()
    {
        Debug.Log("Enemy Turn Ending");
        TurnEvents.EnemyTurnEnd();
        yield return new WaitForSeconds(_enemyTurnDelay);
        StartCoroutine(WaitBetweenTurnsRoutine());    
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
            EndPlayerTurn();
        }
    }

    void EnemyTurn()
    {
        TurnEvents.EnemyTurnBegin();
        StartCoroutine(EndEnemyTurnRoutine());
    }

    void UpdateActionsUI()
    {
        if (_actionsRemaining < 0)
        {
            _actionsRemaining = 0;
        }
        _remainingActionsText.text = "Remaining Actions: " + _actionsRemaining;
    }

    void ClearTurnDisplay()
    {
        _turnStateDisplay.text = "";
    }

    IEnumerator WaitBetweenTurnsRoutine()
    {
        for (int i = _TurnEndDelay; i > 0; i--)
        {
            _turnStateDisplay.text = i + "...";
            yield return new WaitForSeconds(1f); //TODO: Magic Number
        }

        if (GameManager.Instance.IsGameActive())
        {
            if (_currentTurn != TurnState.PlayerTurn)
            {
                _turnStateDisplay.text = "Player's Turn"; //TODO: Serialize???
                StartPlayerTurn();
            }
            else
            {
                _turnStateDisplay.text = "Enemy's Turn"; //TODO: Serialize???
                StartCoroutine(StartEnemyTurnRoutine());
            }
        }
    }
}