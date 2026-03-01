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
        _stateMachine.CharacterController.Move(movement * _stateMachine.FreeLookMovementSpeed * deltaTime);

        if (_stateMachine.InputHandler.MovementValue == Vector2.zero ) 
        {
            _stateMachine.Animator.SetFloat("FreeLookSpeed", 0, 0.025f, deltaTime ); //TODO: Fix magic numbers
            return; 
        }

        _stateMachine.Animator.SetFloat("FreeLookSpeed", 1, 0.075f, deltaTime ); //TODO: Fix magic numbers

        _stateMachine.transform.rotation = Quaternion.LookRotation(movement);
    }

    public override void Exit()
    {
    }
}