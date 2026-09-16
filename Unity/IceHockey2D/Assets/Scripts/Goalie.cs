using UnityEngine;

public class Goalie : MonoBehaviour
{
    readonly int GoalieIdleAnimHash = Animator.StringToHash("Goalie_Idle");
    readonly int GoalieSkateRightAnimHash = Animator.StringToHash("Goalie_SkateRight");
    readonly int GoalieSkateUpAnimHash = Animator.StringToHash("Goalie_SkateUp");

    const float CrossFadeDuration = 0.1f;

    [SerializeField] Transform _puck;
    [SerializeField] float _moveSpeed = 5f;

    [SerializeField] float _minX = -2f;
    [SerializeField] float _maxX = 2f;
    [SerializeField] float _minY = -1f;
    [SerializeField] float _maxY = 1f;

    [SerializeField] Animator _animator;
    [SerializeField] SpriteRenderer _spriteRenderer;

    int _currentAnimationHash;

    void Start()
    {
        _currentAnimationHash = GoalieIdleAnimHash;
        _animator.Play(_currentAnimationHash);
    }

    void Update()
    {
        float targetX = Mathf.Clamp(_puck.position.x, _minX, _maxX);
        float targetY = Mathf.Clamp(_puck.position.y, _minY, _maxY);

        Vector3 targetPosition = new Vector3(
            targetX,
            targetY,
            transform.position.z
        );

        Vector2 direction = targetPosition - transform.position;

        UpdateAnimation(direction);

        transform.position = Vector3.MoveTowards(
            transform.position,
            targetPosition,
            _moveSpeed * Time.deltaTime
        );
    }

    void UpdateAnimation(Vector2 movement)
    {
        bool isMoving = movement.sqrMagnitude > 0.01f;

        if (!isMoving)
        {
            PlayAnimation(GoalieIdleAnimHash);
            return;
        }

        if (movement.x != 0)
            _spriteRenderer.flipX = movement.x < 0;

        int newAnimationHash = movement.y > 0
            ? GoalieSkateUpAnimHash
            : GoalieSkateRightAnimHash;

        PlayAnimation(newAnimationHash);
    }

    void PlayAnimation(int animationHash)
    {
        if (_currentAnimationHash == animationHash)
            return;

        _currentAnimationHash = animationHash;

        _animator.CrossFade(
            _currentAnimationHash,
            CrossFadeDuration
        );
    }
}