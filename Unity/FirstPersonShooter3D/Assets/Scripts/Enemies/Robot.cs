using StarterAssets;
using UnityEngine;
using UnityEngine.AI;

public class Robot : MonoBehaviour
{
    FirstPersonController _player;
    NavMeshAgent _agent;

    const string PLAYER_STRING = "Player";

    void Awake()
    {
        _agent = GetComponent<NavMeshAgent>();
    }

    void Start()
    {
        _player = FindFirstObjectByType<FirstPersonController>();
    }

    void Update()
    {
        if (!_player) return;
        
        _agent.SetDestination(_player.transform.position);
    }

    void OnTriggerEnter(Collider other) 
    {
        if (other.CompareTag(PLAYER_STRING)) 
        {
            EnemyHealth enemyHealth = GetComponent<EnemyHealth>();
            enemyHealth.SelfDestruct();
        }
    }
}
