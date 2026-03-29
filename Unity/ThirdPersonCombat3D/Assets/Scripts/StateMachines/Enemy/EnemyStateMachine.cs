using UnityEngine;
using UnityEngine.AI;

public class EnemyStateMachine : StateMachine
{
    [field: SerializeField] public CharacterController CharacterController { get; set; }
    [field: SerializeField] public Animator Animator { get; set; }
    [field: SerializeField] public ForceReceiver ForceReceiver { get; set; }
    [field: SerializeField] public NavMeshAgent NavMeshAgent { get; set; }
    [field: SerializeField] public float MovementSpeed { get; set; }
    [field: SerializeField] public float PlayerChasingRange { get; set; }

    public GameObject Player { get; set; }

    void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player"); //TODO: Evaluate if there is a better way to get player component
        NavMeshAgent.updatePosition = false;//by default, we do not want the agent to move
        NavMeshAgent.updateRotation = false;
        SwitchState(new EnemyIdleState(this));
    }

    void OnDrawGizmosSelected() //Will draw only when enemy is selected
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, PlayerChasingRange);
    }
}