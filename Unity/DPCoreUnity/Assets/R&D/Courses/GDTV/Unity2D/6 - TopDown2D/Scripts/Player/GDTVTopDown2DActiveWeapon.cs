using UnityEngine;

public class GDTVTopDown2DActiveWeapon : GDTVSingleton<GDTVTopDown2DActiveWeapon>
{
    [SerializeField] MonoBehaviour currentActiveWeapon;
    
    GDTVTopDown2DInputActions inputActions;

    bool attackButtonDown = false;
    bool isAttacking = false;


    protected override void Awake()
    {
        base.Awake();

        inputActions = new GDTVTopDown2DInputActions();
    }


    void OnEnable()
    {
        inputActions.Enable();
    }


    void Start()
    {
        inputActions.Combat.Attack.started += _ => StartAttacking(); // += _ => is a way to subscribe a function to an input action
        inputActions.Combat.Attack.canceled += _ => StopAttacking();
    }


    void Update()
    {
        Attack();
    }


    public void ToggleIsAttacking( bool value )
    {
        isAttacking = value;
    }


    void StartAttacking()
    {
        attackButtonDown = true;
    }


    void StopAttacking()
    {
        attackButtonDown = false;
    }


    void Attack()
    {
        if( attackButtonDown && !isAttacking )
        {
            isAttacking = true;
            ( currentActiveWeapon as GDTVTopDown2DIWeapon ).Attack();
        }   
    }
}
