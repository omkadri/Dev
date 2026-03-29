using UnityEngine;

public class EnemyStateMachine : StateMachine
{
    [field: SerializeField] public Animator Animator { get; set; }

    void Start()
    {
        SwitchState(new EnemyIdleState(this));
    }
}