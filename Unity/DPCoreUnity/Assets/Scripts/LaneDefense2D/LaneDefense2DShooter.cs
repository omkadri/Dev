using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DShooter : MonoBehaviour
{
    [SerializeField] GameObject _projectile;
    [SerializeField] GameObject _gun;

    LaneDefense2DAttackerSpawner _currentLaneAttackerSpawner;
    Animator _animator;

    static readonly int _isAttackingHash = Animator.StringToHash("IsAttacking");


    void Awake()
    {
        _animator = GetComponent<Animator>();       
    }


    void Start()
    {
        SetCurrentLaneAttackerSpawner();
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


    void SetCurrentLaneAttackerSpawner()
    {
        LaneDefense2DAttackerSpawner[] spawners = FindObjectsByType<LaneDefense2DAttackerSpawner>(FindObjectsSortMode.None);

        foreach (LaneDefense2DAttackerSpawner spawner in spawners)
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
        Instantiate(_projectile, _gun.transform.position, transform.rotation); //notice how we are instantiating at the gun's transform position
    }
}