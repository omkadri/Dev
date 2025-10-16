using UnityEngine;
using System.Collections;

public class Brick : MonoBehaviour, IDeflector
{
    [SerializeField] int _maxHealth = 1;
    [SerializeField] Sprite[] _damageSprites;
    [SerializeField] GameObject _hitVFX;
    [SerializeField] AudioClip _hitSFX;
    [SerializeField] GameObject _destroyVFX;
    [SerializeField] AudioClip _destroySFX;

    int _currentHealth;
    Collider2D _collider;

    SpriteRenderer _spriteRenderer;

    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _collider = GetComponent<Collider2D>();
    }

    void Start()
    {
        _currentHealth = _maxHealth;
        UpdateBrickVisual();
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        StartCoroutine(DelayedDamage());
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
        {
            Instantiate(_destroyVFX, transform.position, Quaternion.identity);
        }

        if (_destroySFX != null)
        {
            AudioSource.PlayClipAtPoint(_destroySFX, transform.position);
        }
        //GameManager.Instance?.BrickDestroyed();

        Destroy(gameObject);
    }


    void Hit()
    {
        if (_hitVFX != null)
        {
            Instantiate(_hitVFX, transform.position, Quaternion.identity);
        }

        if (_hitSFX != null)
        {
            AudioSource.PlayClipAtPoint(_hitSFX, transform.position);
        }
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
