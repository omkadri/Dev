using UnityEngine;

public class TopDown2DPickupSpawner : MonoBehaviour
{
    [SerializeField] GameObject pickupPrefab;


    public void DropItems()
    {
        Instantiate( pickupPrefab, transform.position, Quaternion.identity );
    }
}