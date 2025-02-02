using UnityEngine;

public class GDTVTopDown2DDamageDealer : MonoBehaviour
{
    int damageAmount;


    void Start()
    {
        MonoBehaviour currentActiveWeapon = GDTVTopDown2DActiveWeapon.Instance.CurrentActiveWeapon;
        damageAmount = ( currentActiveWeapon as GDTVTopDown2DIWeapon ).GetWeaponInfo().weaponDamage;
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<GDTVTopDown2DEnemyHealth>() )
        {
            GDTVTopDown2DEnemyHealth enemyHealth = other.gameObject.GetComponent<GDTVTopDown2DEnemyHealth>();
            enemyHealth.TakeDamage( damageAmount );
        }
    }
}
