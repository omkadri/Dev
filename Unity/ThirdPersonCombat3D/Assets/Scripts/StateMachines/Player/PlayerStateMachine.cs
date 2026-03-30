using UnityEngine;

public class PlayerStateMachine : StateMachine
{
    [field: SerializeField] public InputHandler InputHandler { get; set; }// [field: SerializeField] exposes the propetries of this getter to the unity inspector.
    [field: SerializeField] public CharacterController CharacterController { get; set; }
    [field: SerializeField] public Animator Animator { get; set; }
    [field: SerializeField] public Targeter Targeter { get; set; }
    [field: SerializeField] public ForceReceiver ForceReceiver { get; set; }
    [field: SerializeField] public Health Health { get; set; }
    [field: SerializeField] public WeaponDamage Weapon { get; set; }
    [field: SerializeField] public float FreeLookMovementSpeed { get; set; }
    [field: SerializeField] public float TargetingMovementSpeed { get; set; }
    [field: SerializeField] public float RotationDamping { get; set; }
    [field: SerializeField] public Attack[] Attacks { get; set; }
    public Transform MainCameraTransform { get; set; }

    void Start()
    {
        MainCameraTransform = Camera.main.transform;

        SwitchState(new PlayerFreeLookState(this));
    }

    void OnEnable()
    {
        Health.OnTakeDamage += HandleTakeDamage;
    }

    void OnDisable()
    {
        Health.OnTakeDamage -= HandleTakeDamage;
    }

    void HandleTakeDamage()
    {
        SwitchState(new PlayerImpactState(this));
    }
}