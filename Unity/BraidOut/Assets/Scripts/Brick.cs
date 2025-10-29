using UnityEngine;
using System.Collections;

public class Brick : MonoBehaviour, IDeflector
{
    [Header("Health & Visuals")]
    [SerializeField] int _maxHealth = 1;
    [SerializeField] Sprite[] _damageSprites;
    [SerializeField] GameObject _hitVFX;
    [SerializeField] AudioClip _hitSFX;
    [SerializeField] GameObject _destroyVFX;
    [SerializeField] AudioClip _destroySFX;

    [Header("Movement")]
    [SerializeField] bool _moveBrickHorizontally = false;
    [SerializeField] float _moveSpeed = 2f;

    public enum StartDirection { Left, Right }
    [SerializeField] StartDirection _startDirection = StartDirection.Right;

    int _currentHealth;
    Collider2D _collider;
    SpriteRenderer _spriteRenderer;

    Vector3 _startPos;
    int _moveDirection;

    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _collider = GetComponent<Collider2D>();
    }

    void Start()
    {
        _currentHealth = _maxHealth;
        UpdateBrickVisual();

        _startPos = transform.position;

        // 👇 Set initial direction based on the dropdown
        _moveDirection = _startDirection == StartDirection.Right ? 1 : -1;
    }

    void Update()
    {
        if (_moveBrickHorizontally)
        {
            MoveBrick();
        }
    }

    void MoveBrick()
    {
        transform.Translate(Vector3.right * _moveDirection * _moveSpeed * Time.deltaTime);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Ball"))
        {
            StartCoroutine(DelayedDamage());
        }
        else
        {
            if (_moveBrickHorizontally)
            {
                _moveDirection *= -1;
            }
        }
    }

    IEnumerator DelayedDamage()
    {
        yield return new WaitForSeconds(0.01f);
        TakeDamage(1);
    }

    void TakeDamage(int amount)
    {
        _currentHealth -= amount;
        if (_currentHealth <= 0)
        {
            Die();
        }
        else
        {
            Hit();
        }
    }

    void Die()
    {
        if (_destroyVFX != null)
            Instantiate(_destroyVFX, transform.position, Quaternion.identity);

        if (_destroySFX != null)
            AudioSource.PlayClipAtPoint(_destroySFX, transform.position);

        Destroy(gameObject);
    }

    void Hit()
    {
        if (_hitVFX != null)
            Instantiate(_hitVFX, transform.position, Quaternion.identity);

        if (_hitSFX != null)
            AudioSource.PlayClipAtPoint(_hitSFX, transform.position);

        UpdateBrickVisual();
    }

    void UpdateBrickVisual()
    {
        if (_damageSprites != null && _damageSprites.Length > 0)
        {
            int spriteIndex = _maxHealth - _currentHealth;
            spriteIndex = Mathf.Clamp(spriteIndex, 0, _damageSprites.Length - 1);
            _spriteRenderer.sprite = _damageSprites[spriteIndex];
        }
    }

    public Vector2 GetDeflection(Vector2 ballPosition, Vector2 ballDirection)
    {
        Vector2 closestPoint = _collider.ClosestPoint(ballPosition);
        Vector2 normal = (ballPosition - closestPoint).normalized;
        Vector2 reflected = Vector2.Reflect(ballDirection.normalized, normal);
        return reflected.normalized;
    }
}