using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] float _movementSpeed = 2f;
    [SerializeField] float _damageAmount = 50f;


    void Update()
    {
        transform.Translate(Vector2.right * _movementSpeed * Time.deltaTime);
    }


    private void OnTriggerEnter2D(Collider2D other)
    {

        Health health = other.GetComponent<Health>();
        Attacker attacker = other.GetComponent<Attacker>();

        if (attacker && health)
        {
            health.DealDamage(_damageAmount);
            Destroy(gameObject);
        }        
    }
}