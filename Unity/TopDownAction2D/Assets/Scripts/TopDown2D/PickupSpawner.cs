using UnityEngine;

public class PickupSpawner : MonoBehaviour
{
    [SerializeField] GameObject coinPickup, healthPickup, staminaPickup;


    public void DropItems()
    {
        int randomNum = Random.Range(1, 5);

        if (randomNum == 1)
        {
            Instantiate(healthPickup, transform.position, Quaternion.identity);
        }

        if (randomNum == 2)
        {
            Instantiate(staminaPickup, transform.position, Quaternion.identity);
        }

        if (randomNum == 3)
        {
            int randomNumberOfCoins = Random.Range( 1, 4);
            for (int i = 0; i < randomNumberOfCoins; i++)
            {
                Instantiate(coinPickup, transform.position, Quaternion.identity);
            }
        }
    }
}