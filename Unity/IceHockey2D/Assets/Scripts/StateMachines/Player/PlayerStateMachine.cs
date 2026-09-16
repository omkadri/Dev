using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStateMachine : StateMachine
{
    [field: SerializeField] public InputReader InputReader { get; private set; }
    [field: SerializeField] public SpriteRenderer SpriteRenderer { get; private set; }
    [field: SerializeField] public Animator Animator { get; private set; }
    [field: SerializeField] public Rigidbody2D Rigidbody { get; private set; }
    [field: SerializeField] public float MoveSpeed { get; private set; } = 1f;

    private void Start()
    {
        SwitchState(new PlayerPosessionState(this));
    }

    private void OnEnable()
    {
    }

    private void OnDisable()
    {
    }
}
