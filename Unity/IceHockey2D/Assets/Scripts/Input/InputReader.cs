using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputReader : MonoBehaviour, InputActions.IPlayerActions
{
    public Vector2 MovementValue { get; private set; }

    private InputActions _inputActions;

    private void Start()
    {
        _inputActions = new InputActions();
        _inputActions.Player.SetCallbacks(this);

        _inputActions.Player.Enable();
    }

    public void OnMove(InputAction.CallbackContext context)
    {
        MovementValue = context.ReadValue<Vector2>();
    }
}