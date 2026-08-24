using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField] GameObject _enemySprite;
    Health _health;
    Animator _animator;

    void Awake()
    {
        _health = GetComponent<Health>();
        _animator = _enemySprite.GetComponent<Animator>();
    }
    void OnEnable()
    {
        EnemyEvents.OnEnemyHit += HandleEnemyHit;
    }

    void OnDisable()
    {
        EnemyEvents.OnEnemyHit -= HandleEnemyHit;
    }

    void HandleEnemyHit(CardData cardData)
    {
        Debug.Log("Enemy Was Hit");
        _health.TakeDamage(cardData.AttackPower);
        if (!_health.IsAlive())
        {
            Die();
        }
    }

    void Die()
    {
        _animator.Play("Death"); //TODO: Serialize
    }
}