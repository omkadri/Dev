using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DAttacker : MonoBehaviour
{
    [Range(0f, 5f)]
    [SerializeField] float _currentSpeed = 0f;
    GameObject _currentTarget;
    Animator _animator;
    static readonly int _isAttackingHash = Animator.StringToHash("IsAttacking");


    void Awake()
    {
        _animator = GetComponent<Animator>();
        FindFirstObjectByType<LaneDefense2DLevelController>().AttackerSpawned(); //TODO: Fix Tight Coupling
    }

    void OnDestroy()
    {
        FindFirstObjectByType<LaneDefense2DLevelController>().AttackerKilled(); //TODO: Fix Tight Coupling
    }


    void Update()
    {
        transform.Translate(Vector2.left * _currentSpeed * Time.deltaTime);
        UpdateAnimState();
    }

    void UpdateAnimState()
    {
        if (!_currentTarget)
        {
            _animator.SetBool(_isAttackingHash, false);
        }
    }
    

    public void SetMovementSpeed(float speed)
    {
        _currentSpeed = speed;
    }


    public void Attack(GameObject target)
    {
        _animator.SetBool(_isAttackingHash, true);
        _currentTarget = target;
    }


    public void DamageCurrentTarget(float amount)
    {
        if (!_currentTarget)
        {
            return;
        }
        LaneDefense2DHealth health = _currentTarget.GetComponent<LaneDefense2DHealth>();
        health?.DealDamage(amount);
    }
}