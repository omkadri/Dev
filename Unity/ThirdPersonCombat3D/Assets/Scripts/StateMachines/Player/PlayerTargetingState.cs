using UnityEngine;

public class PlayerTargetingState : PlayerBaseState
{
    Vector2 _dodgingDirectionInput;
    float _remainingDodgeDuration;

    readonly int TargetingBlendTreeHash = Animator.StringToHash("TargetingBlendTree");
    readonly int TargetingForwardSpeedHash = Animator.StringToHash("TargetingForwardSpeed");
    readonly int TargetingRightSpeedHash = Animator.StringToHash("TargetingRightSpeed");

    const float CrossFadeDuration = 0.2f;

    public PlayerTargetingState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _stateMachine.InputReader.TargetCancelEvent += OnCancel;
        _stateMachine.InputReader.DodgeEvent += OnDodge;
        _stateMachine.Animator.CrossFadeInFixedTime(TargetingBlendTreeHash, CrossFadeDuration);
    }

    public override void Tick(float deltaTime)
    {
        if (_stateMachine.InputReader.IsAttacking)
        {
            _stateMachine.SwitchState(new PlayerAttackState(_stateMachine, 0));
            return;
        }

        if (_stateMachine.InputReader.IsBlocking)
        {
            _stateMachine.SwitchState(new PlayerBlockingState(_stateMachine));
        }

        if (_stateMachine.Targeter.CurrentTarget == null)
        {
            _stateMachine.SwitchState(new PlayerFreeLookState(_stateMachine));
        }

        Vector3 movement = CalculateMovement(deltaTime);
        Move(movement * _stateMachine.TargetingMovementSpeed, deltaTime);

        UpdateAnimator(deltaTime);

        FaceTarget();
    }

    public override void Exit()
    {
        _stateMachine.InputReader.TargetCancelEvent -= OnCancel;
        _stateMachine.InputReader.DodgeEvent -= OnDodge;
    }

    void OnCancel()
    {
        _stateMachine.Targeter.CancelTarget();
        _stateMachine.SwitchState(new PlayerFreeLookState(_stateMachine));
    }

    void OnDodge()
    {
        if (Time.time - _stateMachine.PreviousDodgeTime < _stateMachine.DodgeCooldown) { return; }

        _stateMachine.SetDodgeTime(Time.time);
        _dodgingDirectionInput = _stateMachine.InputReader.MovementValue;
        _remainingDodgeDuration = _stateMachine.DodgeDuration;
    }

    Vector3 CalculateMovement(float deltaTime)
    {
        Vector3 movement = new Vector3();

        if (_remainingDodgeDuration > 0f)
        {
            movement += _stateMachine.transform.right * _dodgingDirectionInput.x * _stateMachine.DodgeDistance / _stateMachine.DodgeDuration;
            movement += _stateMachine.transform.forward * _dodgingDirectionInput.y * _stateMachine.DodgeDistance / _stateMachine.DodgeDuration;

            _remainingDodgeDuration = Mathf.Max(_remainingDodgeDuration - deltaTime, 0f);//prevents _remainingDodgeDuration from becoming negative
        }
        else
        {
            movement += _stateMachine.transform.right * _stateMachine.InputReader.MovementValue.x;
            movement += _stateMachine.transform.forward * _stateMachine.InputReader.MovementValue.y;
        }

        return movement;
    }

    void UpdateAnimator(float deltaTime)
    {
        if (_stateMachine.InputReader.MovementValue.y == 0)
        {
            _stateMachine.Animator.SetFloat(TargetingForwardSpeedHash, 0, 0.1f, deltaTime);
        }
        else
        {
            float value = _stateMachine.InputReader.MovementValue.y > 0 ? 1f : -1f;
            _stateMachine.Animator.SetFloat(TargetingForwardSpeedHash, value, 0.1f, deltaTime);
        }

        if (_stateMachine.InputReader.MovementValue.x == 0)
        {
            _stateMachine.Animator.SetFloat(TargetingRightSpeedHash, 0, 0.1f, deltaTime);
        }
        else
        {
            float value = _stateMachine.InputReader.MovementValue.x > 0 ? 1f : -1f;
            _stateMachine.Animator.SetFloat(TargetingRightSpeedHash, value, 0.1f, deltaTime);
        }        
    }
}