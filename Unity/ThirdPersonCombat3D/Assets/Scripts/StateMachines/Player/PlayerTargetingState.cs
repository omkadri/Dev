using UnityEngine;

public class PlayerTargetingState : PlayerBaseState
{
    public PlayerTargetingState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.InputHandler.TargetCancelEvent += OnCancel; //TODO: Blend Target Activate and Target cancel into the same input action
    }

    public override void Tick(float deltaTime)
    {
    }

    public override void Exit()
    {
        _stateMachine.InputHandler.TargetCancelEvent -= OnCancel;
    }

    void OnCancel()
    {
        _stateMachine.SwitchState(new PlayerFreeLookState(_stateMachine));
    }
}