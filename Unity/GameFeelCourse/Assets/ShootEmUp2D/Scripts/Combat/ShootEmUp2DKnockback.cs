using UnityEngine;
using System;
using System.Collections;
using Unity.VisualScripting;

public class ShootEmUp2DKnockback : MonoBehaviour
{
    public Action OnKnockbackStart;
    public Action OnKnockbackEnd;

    [SerializeField] float knockbackTime = 0.2f;

    Vector3 hitDir;
    float knockbackThrust;

    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
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


    public void ActivateKnockback( Vector3 hitDir, float knockbackThrust )
    {
        this.hitDir = hitDir;//TODO: decide on a naming convention that can differentiate local and global variables
        this.knockbackThrust = knockbackThrust;

        OnKnockbackStart?.Invoke();
    }


    void ApplyKnockbackForce()
    {
        Vector3 difference = ( transform.position - hitDir ).normalized * knockbackThrust * rb2d.mass;
        rb2d.AddForce( difference, ForceMode2D.Impulse );
        StartCoroutine( KnockbackRoutine() );
    }


    IEnumerator KnockbackRoutine()
    {
        yield return new WaitForSeconds( knockbackTime );
        OnKnockbackEnd?.Invoke();
    }


    void StopKnockbackRoutine()
    {
        rb2d.linearVelocity = Vector2.zero;
    }
}