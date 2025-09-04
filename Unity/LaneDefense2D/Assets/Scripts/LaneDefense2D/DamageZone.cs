using UnityEngine;

public class DamageZone : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        FindFirstObjectByType<LifeDisplay>().TakeLife();
        Destroy(other.gameObject);
    }
}