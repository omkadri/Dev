using UnityEngine;

public class TopDown2DDamageDealer : MonoBehaviour
{
    int damageAmount;


    void Start()
    {
        MonoBehaviour currentActiveWeapon = TopDown2DActiveWeapon.Instance.CurrentActiveWeapon;
        damageAmount = (currentActiveWeapon as TopDown2DIWeapon).GetWeaponInfo().WeaponDamage;
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.GetComponent<TopDown2DEnemyHealth>())
        {
            TopDown2DEnemyHealth enemyHealth = other.gameObject.GetComponent<TopDown2DEnemyHealth>();
            enemyHealth.TakeDamage(damageAmount);
        }
    }
}