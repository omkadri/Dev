using UnityEngine;

public class LaneDefense2DDamageZone : MonoBehaviour
{
    void OnTriggerEnter2D()
    {
        FindFirstObjectByType<LaneDefense2DLifeDisplay>().TakeLife();
    }
}