using UnityEngine;

public class LaneDefense2DFox : MonoBehaviour
{
    LaneDefense2DAttacker _attacker;
    Animator _animator;


    void Awake()
    {
        _attacker = GetComponent<LaneDefense2DAttacker>();
        _animator = GetComponent<Animator>();
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.GetComponent<LaneDefense2DGravestone>())
        {
            _animator.SetTrigger("Jump");
        }
        else if (other.GetComponent<LaneDefense2DDefender>())
        {
            _attacker.Attack(other.gameObject);
        }
    }
}