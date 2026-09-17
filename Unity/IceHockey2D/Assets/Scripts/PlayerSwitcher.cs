using UnityEngine;

public class PlayerSwitcher : MonoBehaviour
{
    [SerializeField] AvatarStateMachine[] _players;
    [SerializeField] InputReader _inputReader;

    int _currentPlayerIndex;

    void OnEnable()
    {
        _inputReader.PlayerSwitchEvent += OnCycle;
    }

    void OnDisable()
    {
        _inputReader.PlayerSwitchEvent -= OnCycle;
    }

    void Start()
    {
        SetControlledPlayer(0);
    }

    void OnCycle()
    {
        int nextPlayerIndex = (_currentPlayerIndex + 1) % _players.Length;

        SetControlledPlayer(nextPlayerIndex);
    }

    void SetControlledPlayer(int playerIndex)
    {
        _players[_currentPlayerIndex].SwitchState(new AvatarIdleState(_players[_currentPlayerIndex]));
        _players[playerIndex].SwitchState(new AvatarPlayerControlState(_players[playerIndex]));

        _currentPlayerIndex = playerIndex;
    }
}