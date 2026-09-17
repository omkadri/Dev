using UnityEngine;
using UnityEngine.InputSystem;

public class AvatarIdleState : AvatarBaseState
{
    readonly int IdleAnimHash = Animator.StringToHash("Player_Idle");

    public AvatarIdleState(AvatarStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.Animator.Play(IdleAnimHash);
    }

    public override void Tick(float deltaTime)
    {
    }

    public override void FixedTick(float deltaTime)
    {
    }

    public override void Exit()
    {
    }
}