using UnityEngine;

public class PlayerStateMachine : StateMachine
{
    [field: SerializeField] public InputHandler InputHandler { get; set; }// [field: SerializeField] exposes the propetries of this getter to the unity inspector.

    void Start()
    {
        SwitchState(new PlayerTestState(this));
    }
}
