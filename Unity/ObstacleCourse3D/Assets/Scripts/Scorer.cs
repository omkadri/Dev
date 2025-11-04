using UnityEngine;

public class Scorer : MonoBehaviour
{
    int _hits = 0;

    void OnCollisionEnter(Collision other)
    {
        if (!other.gameObject.CompareTag("Hit"))
        {
            _hits++;
            Debug.Log("You've bumped into this object many times: " + _hits);  
        }
    }
}