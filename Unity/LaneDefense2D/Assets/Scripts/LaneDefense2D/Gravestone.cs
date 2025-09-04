using UnityEngine;

public class Gravestone : MonoBehaviour
{
    void OnTriggerStay2D(Collider2D other)
    {
        if (other.GetComponent<Attacker>())
        {
        }
    }
}
