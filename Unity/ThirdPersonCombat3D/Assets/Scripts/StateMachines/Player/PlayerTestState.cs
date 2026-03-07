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
        Vector3 movement = CalculateMovement();
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

    Vector3 CalculateMovement()
    {
        Vector3 forward = _stateMachine.MainCameraTransform.forward;
        forward.y = 0;
        forward.Normalize();

        Vector3 right = _stateMachine.MainCameraTransform.right;
        right.y = 0;
        right.Normalize();

        // Combine camera forward/right directions with input so movement is relative to the camera's facing direction
        return (forward * _stateMachine.InputHandler.MovementValue.y) + (right * _stateMachine.InputHandler.MovementValue.x);
    }
}