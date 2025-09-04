using UnityEngine;
using System;
using System.Collections;
using Unity.VisualScripting;

public class Knockback : MonoBehaviour
{
    public Action OnKnockbackStart;
    public Action OnKnockbackEnd;

    [SerializeField] float _knockbackTime = 0.2f;

    Vector3 _hitDir;
    float _knockbackThrust;

    Rigidbody2D _rb2d;


    void Awake()
    {
        _rb2d = GetComponent<Rigidbody2D>();
    }


    void OnEnable()
    {
        OnKnockbackStart += ApplyKnockbackForce;
        OnKnockbackEnd += StopKnockbackRoutine;
    }


    void OnDisable()
    {
        OnKnockbackStart -= ApplyKnockbackForce;
        OnKnockbackEnd -= StopKnockbackRoutine;
    }


    public void ActivateKnockback(Vector3 hitDir, float knockbackThrust)
    {
        _hitDir = hitDir;
        _knockbackThrust = knockbackThrust;

        OnKnockbackStart?.Invoke();
    }


    void ApplyKnockbackForce()
    {
        Vector3 difference = (transform.position - _hitDir).normalized * _knockbackThrust * _rb2d.mass;
        _rb2d.AddForce(difference, ForceMode2D.Impulse);
        StartCoroutine(KnockbackRoutine());
    }


    IEnumerator KnockbackRoutine()
    {
        yield return new WaitForSeconds(_knockbackTime);
        OnKnockbackEnd?.Invoke();
    }


    void StopKnockbackRoutine()
    {
        _rb2d.linearVelocity = Vector2.zero;
    }
}