using UnityEngine;
using UnityEngine.InputSystem;

public class AvatarPlayerControlState : AvatarBaseState
{
    readonly int PosessionIdleAnimHash = Animator.StringToHash("Player_Idle");
    readonly int PosessionSkateRightAnimHash = Animator.StringToHash("Player_SkateRight");
    readonly int PosessionSkateUpAnimHash = Animator.StringToHash("Player_SkateUp");
    readonly int PosessionShootAnimHash = Animator.StringToHash("Player_Shoot");

    const float CrossFadeDuration = 0.1f;

    int _currentAnimationHash;

    public AvatarPlayerControlState(AvatarStateMachine stateMachine) : base(stateMachine)
    {
    }

    public override void Enter()
    {
        _currentAnimationHash = PosessionIdleAnimHash;

        _stateMachine.Animator.Play(_currentAnimationHash);

        _stateMachine.InputReader.ShootEvent += OnShoot;
    }

    public override void Tick(float deltaTime)
    {
        Vector2 movement = _stateMachine.InputReader.MovementValue;

        UpdateAnimation(movement);
    }

    void UpdateAnimation(Vector2 movement)
    {
        bool newIsMoving = movement.sqrMagnitude > 0.01f;

        if (!newIsMoving)
        {
            if (_currentAnimationHash != PosessionIdleAnimHash)
            {
                _currentAnimationHash = PosessionIdleAnimHash;

                _stateMachine.Animator.CrossFade(_currentAnimationHash, CrossFadeDuration);
            }

            return;
        }

        Vector2 mousePosition = Mouse.current.position.ReadValue();

        Vector3 playerScreenPosition = Camera.main.WorldToScreenPoint(_stateMachine.transform.position);

        Vector2 mouseDirection = mousePosition - (Vector2)playerScreenPosition;

        if (mouseDirection.x != 0) _stateMachine.SpriteRenderer.flipX = mouseDirection.x < 0;

        int newAnimationHash = mouseDirection.y > 0 ? PosessionSkateUpAnimHash : PosessionSkateRightAnimHash;

        if (newAnimationHash == _currentAnimationHash)
        {
            return;
        }

        _currentAnimationHash = newAnimationHash;

        _stateMachine.Animator.CrossFade(_currentAnimationHash, CrossFadeDuration);
    }

    public override void FixedTick(float deltaTime)
    {
        Vector2 movement = _stateMachine.InputReader.MovementValue;

        _stateMachine.Rigidbody.linearVelocity = movement * _stateMachine.MoveSpeed;
    }

    public override void Exit()
    {
        _stateMachine.Rigidbody.linearVelocity = Vector2.zero;
        _stateMachine.InputReader.ShootEvent -= OnShoot;
    }

    void OnShoot()
    {
        _stateMachine.Animator.Play(PosessionShootAnimHash);
    }
}