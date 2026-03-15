using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputHandler : MonoBehaviour, InputActions.IPlayerActions
{
    public Vector2 MovementValue { get; set; }
    public Vector2 LookValue { get; set; }
    public event Action JumpEvent; //TODO: Find better name
    public event Action DodgeEvent;
    public event Action TargetActivateEvent;
    public event Action TargetCancelEvent;
    public event Action AimActivateEvent;
    public event Action AimCancelEvent;
    public event Action VantagePointActivateEvent;
    public event Action VantagePointCancelEvent;

    InputActions _inputActions;

    bool _vantageActive = false;


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
        LookValue = context.ReadValue<Vector2>();
    }

    public void OnMove(InputAction.CallbackContext context)
    {
        MovementValue = context.ReadValue<Vector2>();
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

    public void OnTargetActivate(InputAction.CallbackContext context)
    {
        if (!context.performed) { return; }

        TargetActivateEvent?.Invoke();
    }

    public void OnTargetCancel(InputAction.CallbackContext context)//TODO: Blend Target Activate and Target cancel into the same input action
    {
        if (!context.performed) { return; }

        TargetCancelEvent?.Invoke();
    }

    public void OnAim(InputAction.CallbackContext context)
    {
        if (context.performed)
        {
            AimActivateEvent?.Invoke();
        }
        else if (context.canceled)
        {
            AimCancelEvent?.Invoke();
        }
    }

    public void OnVantagePoint(InputAction.CallbackContext context)
    {
        if (context.performed)
        {
            _vantageActive = !_vantageActive;

            if (_vantageActive)
            {
                VantagePointActivateEvent?.Invoke();
            }
            else
            {
                VantagePointCancelEvent?.Invoke();
            }
        }
    }
}