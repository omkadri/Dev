using UnityEngine;

public class LaneDefense2DDamageZone : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        FindFirstObjectByType<LaneDefense2DLifeDisplay>().TakeLife();
        Destroy(other.gameObject);
    }
}