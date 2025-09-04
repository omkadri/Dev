using UnityEngine;

public class Destructible : MonoBehaviour
{
    [SerializeField] GameObject destroyVFX;


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.GetComponent<DamageDealer>() || other.GetComponent<Projectile>())
        {
            PickupSpawner pickupSpawner = GetComponent<PickupSpawner>();
            pickupSpawner?.DropItems();//TODO investigate using OnDestroy callback
            Instantiate(destroyVFX, transform.position, Quaternion.identity);
            if (other.GetComponent<Projectile>())
            {
                Destroy(other.gameObject);
            }
            Destroy(gameObject);
        }
    }
}
