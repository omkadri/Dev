using UnityEngine;

public class PlayerAimingState : PlayerBaseState
{
    readonly int AimingBlendTreeHash = Animator.StringToHash("AimingBlendTree");

    public PlayerAimingState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.InputHandler.AimCancelEvent += OnCancel;
        _stateMachine.Animator.Play(AimingBlendTreeHash);
    }

    public override void Tick(float deltaTime)
    {
    }

    public override void Exit()
    {
        _stateMachine.InputHandler.AimCancelEvent -= OnCancel;
    }

    void OnCancel()
    {
        _stateMachine.SwitchState(new PlayerFreeLookState(_stateMachine));
    }
}