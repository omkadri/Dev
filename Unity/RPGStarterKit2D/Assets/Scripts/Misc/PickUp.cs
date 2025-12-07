using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour
{
    // Keeping Bomb as placeholder if you wanted to implement something like item limited amounts 
    public enum TypeOfPickUp{Rupee, Bomb};
    public TypeOfPickUp typeOfPickUp;

    const string playerString = "Player";


    void OnTriggerEnter2D(Collider2D other) 
    {
        if (other.gameObject.CompareTag(playerString)) 
        {
            Destroy(gameObject);

            if (typeOfPickUp == TypeOfPickUp.Rupee) 
            {
                PickUpRupee();
            }
        }
    }
    

    void PickUpRupee() 
    {
        FindFirstObjectByType<RupeeWallet>().IncreaseRupeeCount(1);//TODO: MagicNumber
    }
}