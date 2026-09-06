using UnityEngine;

public class DamageZone : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        FindAnyObjectByType<LifeDisplay>().TakeLife();
        Destroy(other.gameObject);
    }
}