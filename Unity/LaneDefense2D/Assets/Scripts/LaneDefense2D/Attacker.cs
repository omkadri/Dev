using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attacker : MonoBehaviour
{
    [Range(0f, 5f)]
    [SerializeField] float _currentSpeed = 0f;
    GameObject _currentTarget;
    Animator _animator;
    static readonly int _isAttackingHash = Animator.StringToHash("IsAttacking");
    LevelController _levelController;


    void Awake()
    {
        _animator = GetComponent<Animator>();
        _levelController = FindFirstObjectByType<LevelController>();
        if (_levelController)
        {
            FindFirstObjectByType<LevelController>().AttackerSpawned(); //TODO: Fix Tight Coupling
        }
    }


    void OnDestroy()
    {
        if (_levelController)
        {
            FindFirstObjectByType<LevelController>().AttackerKilled(); //TODO: Fix Tight Coupling
        }
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
        Health health = _currentTarget.GetComponent<Health>();
        health?.DealDamage(amount);
    }
}