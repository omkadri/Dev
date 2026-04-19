using UnityEngine;

public class PlayerFallingState : PlayerBaseState
{
    readonly int JumpEndAnimHash = Animator.StringToHash("JumpEnd");

    Vector3 _momentum; //TODO: better name????

    const float CrossFadeDuration = 0.2f;

    public PlayerFallingState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _momentum = _stateMachine.CharacterController.velocity;
        _momentum.y = 0;

        _stateMachine.Animator.CrossFadeInFixedTime(JumpEndAnimHash, CrossFadeDuration);
    }

    public override void Tick(float deltaTime)
    {
        Move(_momentum, deltaTime);

        if (_stateMachine.CharacterController.isGrounded)
        {
            ReturnToLocomotion();
        }

        FaceTarget();
    }

    public override void Exit()
    {
    }
}