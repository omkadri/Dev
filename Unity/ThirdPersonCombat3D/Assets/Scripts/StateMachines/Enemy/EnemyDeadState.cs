using UnityEngine;

public class EnemyDeadState : EnemyBaseState
{
    public EnemyDeadState(EnemyStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        //toggle rag doll
        _stateMachine.Weapon.gameObject.SetActive(false);
        GameObject.Destroy(_stateMachine.Target); //TODO: Object pool
    }

    public override void Tick(float deltaTime)
    {
    }

    public override void Exit()
    {
    }
}