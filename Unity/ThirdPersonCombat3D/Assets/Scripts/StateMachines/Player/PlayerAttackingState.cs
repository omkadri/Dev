using UnityEngine;

public class PlayerAttackingState : PlayerBaseState
{
    Attack _attack;
    public PlayerAttackingState(PlayerStateMachine stateMachine, int AttackID) : base(stateMachine)
    {
        _attack = _stateMachine.Attacks[AttackID];
    }

    public override void Enter()
    {
        _stateMachine.Animator.CrossFadeInFixedTime(_attack.AnimationName, 0.1f); //CrossFadeInFixedTime plays new animations in a way that blends them from the current animation
    }

    public override void Tick(float deltaTime)
    {
    }

    public override void Exit()
    {
    }
}
