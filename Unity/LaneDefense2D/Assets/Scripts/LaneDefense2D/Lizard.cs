using UnityEngine;

public class Lizard : MonoBehaviour//TODO: Investigate getting rid of this script. Maybe an interface
{
    Attacker _attacker;


    void Awake()
    {
        _attacker = GetComponent<Attacker>();
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.GetComponent<Defender>())
        {
            _attacker.Attack(other.gameObject);
        }
    }
}