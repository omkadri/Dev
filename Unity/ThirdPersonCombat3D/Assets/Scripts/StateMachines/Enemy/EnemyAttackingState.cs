using UnityEngine;

public class EnemyAttackingState : EnemyBaseState
{
    readonly int AttackAnimHash = Animator.StringToHash("Attack");

    const float CrossFadeDuration = 0.2f;

    public EnemyAttackingState(EnemyStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.Weapon.SetAttack(_stateMachine.DamageAmount);

        _stateMachine.Animator.CrossFadeInFixedTime(AttackAnimHash, CrossFadeDuration);
    }

    public override void Tick(float deltaTime)
    {
    }

    public override void Exit()
    {
    }
}