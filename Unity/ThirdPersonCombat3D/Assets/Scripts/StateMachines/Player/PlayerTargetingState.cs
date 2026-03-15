using UnityEngine;

public class PlayerTargetingState : PlayerBaseState
{
    readonly int TargetingBlendTreeHash = Animator.StringToHash("TargetingBlendTree");

    public PlayerTargetingState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.InputHandler.TargetCancelEvent += OnCancel; //TODO: Blend Target Activate and Target cancel into the same input action
        _stateMachine.Animator.Play(TargetingBlendTreeHash);
    }

    public override void Tick(float deltaTime)
    {
        if (_stateMachine.Targeter.CurrentTarget == null)
        {
            _stateMachine.SwitchState(new PlayerFreeLookState(_stateMachine));
        }

        Vector3 movement = CalculateMovement();
        Move(movement * _stateMachine.TargetingMovementSpeed, deltaTime);

        FaceTarget();
    }

    public override void Exit()
    {
        _stateMachine.InputHandler.TargetCancelEvent -= OnCancel;
    }

    void OnCancel()
    {
        _stateMachine.Targeter.CancelTarget();
        _stateMachine.SwitchState(new PlayerFreeLookState(_stateMachine));
    }

    Vector3 CalculateMovement()
    {
        Vector3 movement = new Vector3();

        movement += _stateMachine.transform.right * _stateMachine.InputHandler.MovementValue.x;
        movement += _stateMachine.transform.forward * _stateMachine.InputHandler.MovementValue.y;

        return movement;
    }
}