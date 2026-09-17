using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarStateMachine : StateMachine
{
    [field: SerializeField] public InputReader InputReader { get; private set; }
    [field: SerializeField] public SpriteRenderer SpriteRenderer { get; private set; }
    [field: SerializeField] public Animator Animator { get; private set; }
    [field: SerializeField] public Rigidbody2D Rigidbody { get; private set; }
    [field: SerializeField] public float MoveSpeed { get; private set; } = 1f;

    [field: SerializeField] public bool IsStartingPlayer { get; private set; }

    private void Start()
    {
        SwitchState(IsStartingPlayer ? new AvatarPlayerControlState(this) : new AvatarIdleState(this));    
    }

    private void OnEnable()
    {
    }

    private void OnDisable()
    {
    }
}
