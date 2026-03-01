using System.Threading;
using UnityEngine;

public class PlayerTestState : PlayerBaseState
{
    public PlayerTestState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
    }

    public override void Tick(float deltaTime)
    {
        Vector3 movement = new Vector3();
        movement.x = _stateMachine.InputHandler.MovementValue.x;
        movement.y = 0;
        movement.z = _stateMachine.InputHandler.MovementValue.y;
        _stateMachine.transform.Translate(movement * deltaTime);
    }

    public override void Exit()
    {
    }
}