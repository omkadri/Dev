using UnityEngine;

public class PlayerFreeLookState : PlayerBaseState
{
    readonly int FreeLookSpeedHash = Animator.StringToHash("FreeLookSpeed"); //integers are processed faster than strings.
    readonly int FreeLookBlendTreeHash = Animator.StringToHash("FreeLookBlendTree");
    const float AnimatorDampTime = 0.075f;
    public PlayerFreeLookState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.InputHandler.TargetActivateEvent += OnTarget;
        _stateMachine.InputHandler.AimActivateEvent += OnAim;
        _stateMachine.Animator.Play(FreeLookBlendTreeHash);
    }

    public override void Tick(float deltaTime)
    {
        Vector3 movement = CalculateMovement();
        _stateMachine.CharacterController.Move(movement * _stateMachine.FreeLookMovementSpeed * deltaTime);

        if (_stateMachine.InputHandler.MovementValue == Vector2.zero)
        {
            _stateMachine.Animator.SetFloat(FreeLookSpeedHash, 0, AnimatorDampTime, deltaTime); //TODO: Fix magic numbers
            return;
        }

        _stateMachine.Animator.SetFloat(FreeLookSpeedHash, 1, AnimatorDampTime, deltaTime); //TODO: Fix magic numbers

        FaceMovementDirection(movement, deltaTime);
    }

    public override void Exit()
    {
        _stateMachine.InputHandler.TargetActivateEvent -= OnTarget;
        _stateMachine.InputHandler.AimActivateEvent -= OnAim;
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

    void FaceMovementDirection(Vector3 movement, float deltaTime)
    {
        _stateMachine.transform.rotation = Quaternion.Lerp(
            _stateMachine.transform.rotation,
            Quaternion.LookRotation(movement),
            deltaTime * _stateMachine.RotationDamping);
    }

    void OnTarget()
    {
        if (!_stateMachine.Targeter.SelectTarget()) { return; }

        _stateMachine.SwitchState(new PlayerTargetingState(_stateMachine));
    }
    void OnAim()
    {
        _stateMachine.SwitchState(new PlayerAimingState(_stateMachine));
    }
}