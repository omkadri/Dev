using UnityEngine;

public class PlayerPosessionState : PlayerBaseState
{
    readonly int PosessionIdleAnimHash = Animator.StringToHash("Player_Idle");
    readonly int PosessionSkateRightAnimHash = Animator.StringToHash("Player_SkateRight");
    readonly int PosessionSkateUpAnimHash = Animator.StringToHash("Player_SkateUp");

    const float CrossFadeDuration = 0.1f;

    bool _isMoving;
    int _currentAnimationHash;

    public PlayerPosessionState(PlayerStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _isMoving = false;
        _currentAnimationHash = PosessionIdleAnimHash;

        _stateMachine.Animator.Play(_currentAnimationHash);
    }

    public override void Tick(float deltaTime)
    {
        Vector2 movement = _stateMachine.InputReader.MovementValue;

        _stateMachine.Rigidbody.linearVelocity = movement * _stateMachine.MoveSpeed;

        UpdateAnimation(movement);
    }

    void UpdateAnimation(Vector2 movement)
    {
        bool newIsMoving = movement.sqrMagnitude > 0.01f;

        if (movement.x != 0)
            _stateMachine.SpriteRenderer.flipX = movement.x < 0;

        int newAnimationHash = PosessionIdleAnimHash;

        if (newIsMoving)
        {
            newAnimationHash = movement.y > 0
                ? PosessionSkateUpAnimHash
                : PosessionSkateRightAnimHash;
        }

        if (newAnimationHash == _currentAnimationHash)
        {
            _isMoving = newIsMoving;
            return;
        }

        _currentAnimationHash = newAnimationHash;
        _isMoving = newIsMoving;

        _stateMachine.Animator.CrossFade(
            _currentAnimationHash,
            CrossFadeDuration
        );
    }

    public override void Exit()
    {
        _stateMachine.Rigidbody.linearVelocity = Vector2.zero;
    }
}