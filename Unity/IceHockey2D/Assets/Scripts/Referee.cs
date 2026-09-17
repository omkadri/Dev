using UnityEngine;

public class Referee : MonoBehaviour
{
    [SerializeField] Transform _puck;
    [SerializeField] Rigidbody2D _rigidbody2D;
    [SerializeField] SpriteRenderer _spriteRenderer;
    [SerializeField] Animator _animator;
    [SerializeField] float _distance = 2f;
    [SerializeField] float _moveSpeed = 1f;

    readonly int RefereeIdleAnimHash = Animator.StringToHash("Referee_Idle");
    readonly int RefereeSkateAnimHash = Animator.StringToHash("Referee_Skate");

    Vector2 _previousPosition;

    void Awake()
    {
        _previousPosition = _rigidbody2D.position;
    }

    void FixedUpdate()
    {
        Vector2 offset = _rigidbody2D.position - (Vector2)_puck.position;
        float currentDistance = offset.magnitude;

        if (currentDistance > 0f && Mathf.Abs(currentDistance - _distance) > 0.01f)
        {
            Vector2 direction = offset.normalized;
            Vector2 targetPosition = (Vector2)_puck.position + direction * _distance;

            _rigidbody2D.MovePosition(Vector2.MoveTowards(_rigidbody2D.position, targetPosition, _moveSpeed * Time.fixedDeltaTime));
        }

        UpdateAnimation();
        UpdateSpriteFlip();
        _previousPosition = _rigidbody2D.position;
    }

    void UpdateAnimation()
    {
        bool isMoving = Vector2.Distance(_rigidbody2D.position, _previousPosition) > 0.001f;

        _animator.Play(isMoving ? RefereeSkateAnimHash : RefereeIdleAnimHash);
    }

    void UpdateSpriteFlip()
    {
        _spriteRenderer.flipX = _puck.position.x < transform.position.x;
    }
}