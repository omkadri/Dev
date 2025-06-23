using UnityEngine;

public class LaneDefense2DGravestone : MonoBehaviour
{
    void OnTriggerStay2D(Collider2D other)
    {
        if (other.GetComponent<LaneDefense2DAttacker>())
        {
        }
    }
}
