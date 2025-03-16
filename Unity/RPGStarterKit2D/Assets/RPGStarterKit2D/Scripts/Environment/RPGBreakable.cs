using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPGBreakable : MonoBehaviour
{
    [SerializeField] GameObject blue_rupee;
    [SerializeField] enum ObjectType {pot, bush};
    [SerializeField] ObjectType objectType;


    public void BreakObject() 
    {
        gameObject.GetComponent<Animator>().SetTrigger("Break");
        gameObject.GetComponent<BoxCollider2D>().enabled = false;

        StartCoroutine(DelayDestroyRoutine(gameObject));
    }


    IEnumerator DelayDestroyRoutine(GameObject other) 
    {
        switch (objectType) 
        {
            case ObjectType.pot: 
                Instantiate(blue_rupee, transform.position, Quaternion.identity);
                break;
            case ObjectType.bush: 
                break; 
        }

        yield return new WaitForSeconds(2f);//TODO: Magic number
        Destroy(other);
    }
}