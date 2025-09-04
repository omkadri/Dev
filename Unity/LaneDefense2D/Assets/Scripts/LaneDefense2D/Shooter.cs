using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour
{
    [SerializeField] GameObject _projectile;
    [SerializeField] GameObject _gun;

    AttackerSpawner _currentLaneAttackerSpawner;
    Animator _animator;

    GameObject _projectileParent;
    const string PROJECTILE_PARENT_NAME = "Projectiles";

    static readonly int _isAttackingHash = Animator.StringToHash("IsAttacking");


    void Awake()
    {
        _animator = GetComponent<Animator>();       
    }


    void Start()
    {
        SetCurrentLaneAttackerSpawner();
        CreateProjectileParent();
    }


    void Update()
    {
        if(IsAttackerInLane())
        {
            _animator.SetBool(_isAttackingHash, true);
        }
        else
        {
            _animator.SetBool(_isAttackingHash, false);
        }
    }


    

    void CreateProjectileParent()
    {
        _projectileParent = GameObject.Find(PROJECTILE_PARENT_NAME); //TODO: Optimize this
        if (!_projectileParent)
        {
            _projectileParent = new GameObject(PROJECTILE_PARENT_NAME);
        }
    }


    void SetCurrentLaneAttackerSpawner()
    {
        AttackerSpawner[] spawners = FindObjectsByType<AttackerSpawner>(FindObjectsSortMode.None);

        foreach (AttackerSpawner spawner in spawners)
        {
            bool isCloseEnough = Mathf.Abs(spawner.transform.position.y - transform.position.y) < 0.1f; //using 0.1 because Mathf.Epsilon returns an error
            if (isCloseEnough)
            {
                _currentLaneAttackerSpawner = spawner;
            }
        }
    }

    bool IsAttackerInLane()
    {
        if (_currentLaneAttackerSpawner.transform.childCount <= 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public void Fire()
    {
        GameObject newProjectile = Instantiate(_projectile, _gun.transform.position, transform.rotation);
       newProjectile.transform.parent = _projectileParent.transform;
    }
}