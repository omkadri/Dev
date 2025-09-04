using UnityEngine;

public class Fox : MonoBehaviour
{
    Attacker _attacker;
    Animator _animator;


    void Awake()
    {
        _attacker = GetComponent<Attacker>();
        _animator = GetComponent<Animator>();
    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.GetComponent<Gravestone>())
        {
            _animator.SetTrigger("Jump");
        }
        else if (other.GetComponent<Defender>())
        {
            _attacker.Attack(other.gameObject);
        }
    }
}