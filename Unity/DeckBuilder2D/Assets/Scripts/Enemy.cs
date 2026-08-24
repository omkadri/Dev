using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour
{
    [SerializeField] GameObject _enemySprite;
    Health _health;
    Animator _animator;
    Vector3 _originalPosition;

    void Awake()
    {
        _health = GetComponent<Health>();
        _animator = _enemySprite.GetComponent<Animator>();
    }

    void Start()
    {
        _originalPosition = _enemySprite.transform.position;
    }
    void OnEnable()
    {
        EnemyEvents.OnEnemyHit += HandleEnemyHit;
        TurnEvents.OnEnemyTurnBegin += Attack;
    }

    void OnDisable()
    {
        EnemyEvents.OnEnemyHit -= HandleEnemyHit;
        TurnEvents.OnEnemyTurnBegin -= Attack;

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

    void Attack()
    {
        Debug.Log("Enemy Attack");
        StartCoroutine(EnemyAttackAnimRoutine());
    }

    void Die()
    {
        _animator.Play("Death"); //TODO: Serialize
    }

    IEnumerator EnemyAttackAnimRoutine() //TODO: Avoid passing in cardData?
    {
        Vector3 targerPosition = _originalPosition + new Vector3(-4f, 0, 0); //TODO: Magic Number

        float duration = 0.5f;//TODO: Magic Number
        float timeElapsed = 0f;//TODO: Magic Number

        //move forward
        while(timeElapsed < duration)
        {
            _enemySprite.transform.position = Vector3.Lerp(_originalPosition, targerPosition, timeElapsed/duration);
            timeElapsed += Time.deltaTime;

            yield return null;
        }

        _animator.Play("Attack"); //TODO: expose as serialized field???

        yield return new WaitForSeconds(0.5f); //TODO: Magic number. maybe a more systematic approach???

        timeElapsed = 0;

        //move back to starting position
        while(timeElapsed < duration)
        {
            _enemySprite.transform.position = Vector3.Lerp(targerPosition, _originalPosition, timeElapsed/duration);
            timeElapsed += Time.deltaTime;

            yield return null;
        }

        yield return null;
    }
}