using UnityEngine;

public class PlayerStateMachine : StateMachine
{
    [field: SerializeField] public InputHandler InputHandler { get; set; }// [field: SerializeField] exposes the propetries of this getter to the unity inspector.
    [field: SerializeField] public CharacterController CharacterController { get; set; }
    [field: SerializeField] public float FreeLookMovementSpeed { get; set; }

    void Start()
    {
        SwitchState(new PlayerTestState(this));
    }
}
