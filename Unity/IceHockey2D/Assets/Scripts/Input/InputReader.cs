using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputReader : MonoBehaviour, InputActions.IPlayerActions
{
    public Vector2 MovementValue { get; private set; }
    public event Action ShootEvent;
    public event Action PlayerSwitchEvent;

    InputActions _inputActions;

    void Start()
    {
        _inputActions = new InputActions();
        _inputActions.Player.SetCallbacks(this);

        _inputActions.Player.Enable();
    }

    public void OnMove(InputAction.CallbackContext context)
    {
        MovementValue = context.ReadValue<Vector2>();
    }

    public void OnShoot(InputAction.CallbackContext context)
    {
        if (!context.performed) { return; }

        ShootEvent?.Invoke();
    }

    public void OnSwitchPlayer(InputAction.CallbackContext context)
    {
        if (!context.performed) { return; }

        PlayerSwitchEvent?.Invoke();
    }
}