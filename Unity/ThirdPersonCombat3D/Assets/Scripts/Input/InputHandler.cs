using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputHandler : MonoBehaviour, InputActions.IPlayerActions
{
    public event Action JumpEvent; //TODO: Find better name
    public event Action DodgeEvent;

    InputActions _inputActions;

    void Start()
    {
        _inputActions = new InputActions();
        _inputActions.Player.SetCallbacks(this); // this hooks up the funtions below to their callback counterparts in InputActions.cs
        _inputActions.Player.Enable();
    }

    void OnDestroy()
    {
        _inputActions.Player.Disable();
    }

    public void OnAttack(InputAction.CallbackContext context)
    {
    }

    public void OnCrouch(InputAction.CallbackContext context)
    {
    }

    public void OnInteract(InputAction.CallbackContext context)
    {
    }

    public void OnJump(InputAction.CallbackContext context)
    {
        if (!context.performed) { return; }

        JumpEvent?.Invoke();
    }

    public void OnDodge(InputAction.CallbackContext context)
    {
        if (!context.performed) { return; }

        DodgeEvent?.Invoke();
    }

    public void OnLook(InputAction.CallbackContext context)
    {
    }

    public void OnMove(InputAction.CallbackContext context)
    {
    }

    public void OnNext(InputAction.CallbackContext context)
    {
    }

    public void OnPrevious(InputAction.CallbackContext context)
    {
    }

    public void OnSprint(InputAction.CallbackContext context)
    {
    }

}