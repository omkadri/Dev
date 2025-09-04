using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{
    [SerializeField] float roamDirChangeTime = 2f;
    [SerializeField] float attackRange = 0f;
    [SerializeField] MonoBehaviour enemyType;
    [SerializeField] float attackCooldown = 2f;
    [SerializeField] bool stopMovingWhileAttacking = false;

    bool canAttack = true;

    enum State
    {
        Roaming,
        Attacking
    }

    Vector2 roamPos;
    float timeRoaming = 0f;

    State state;
    EnemyPathfinder enemyPathfinding;

    void Awake()
    {
        enemyPathfinding = GetComponent<EnemyPathfinder>();
        state = State.Roaming;
    }


    void Start()
    {
        roamPos = GetRoamingPos();
    }


    void Update()
    {
        MovementStateControl();
    }


    void MovementStateControl()
    {
        switch (state)
        {
            default:
            case State.Roaming:
                Roaming();
            break;

            case State.Attacking:
                Attacking();
            break;
        }
    }


    void Roaming()
    {
        timeRoaming += Time.deltaTime;

        enemyPathfinding.MoveTo(roamPos);

        if (Vector2.Distance(transform.position, PlayerController.Instance.transform.position) < attackRange)
        {
            state = State.Attacking;
        }

        if (timeRoaming > roamDirChangeTime)
        {
            roamPos = GetRoamingPos();
        }
    }


    void Attacking()
    {
        if (Vector2.Distance(transform.position, PlayerController.Instance.transform.position) > attackRange)
        {
            state = State.Roaming;
        }

        if (attackRange != 0 && canAttack)
        {
            canAttack = false;
        
            (enemyType as IEnemy).Attack();


            if(stopMovingWhileAttacking)
            {
                enemyPathfinding.StopMoving();
            }
            else
            {
                enemyPathfinding.MoveTo(roamPos);
            }

            StartCoroutine(AttackCooldownRoutine());
        }
    }


    IEnumerator AttackCooldownRoutine()
    {
        yield return new WaitForSeconds(attackCooldown);
        canAttack = true;
    }


    Vector2 GetRoamingPos()
    {
        timeRoaming = 0f;
        return new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f)).normalized;
    }
}