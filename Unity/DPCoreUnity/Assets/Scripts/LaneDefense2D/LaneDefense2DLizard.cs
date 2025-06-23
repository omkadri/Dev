using UnityEngine;

public class LaneDefense2DLizard : MonoBehaviour//TODO: Investigate getting rid of this script. Maybe an interface
{
    LaneDefense2DAttacker _attacker;


    void Awake()
    {
        _attacker = GetComponent<LaneDefense2DAttacker>();
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.GetComponent<LaneDefense2DDefender>())
        {
            _attacker.Attack(other.gameObject);
        }
    }
}