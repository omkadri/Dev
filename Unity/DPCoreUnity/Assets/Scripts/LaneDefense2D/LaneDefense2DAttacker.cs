using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DAttacker : MonoBehaviour
{
    [Range(0f, 5f)]
    [SerializeField] float _currentSpeed = 0f;
    GameObject _currentTarget;
    Animator _animator;
    static readonly int _isAttackingHash = Animator.StringToHash( "IsAttacking" );


    void Awake()
    {
        _animator = GetComponent<Animator>();
    }


    void Update()
    {
        transform.Translate(Vector2.left * _currentSpeed * Time.deltaTime);
    }


    public void SetMovementSpeed(float speed)
    {
        _currentSpeed = speed;
    }


    public void Attack( GameObject target )
    {
        _animator.SetBool(_isAttackingHash, true);
        _currentTarget = target;
    }
}
