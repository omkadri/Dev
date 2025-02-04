using System.Collections;
using UnityEngine;

public class GDTVTopDown2DActiveWeapon : GDTVSingleton<GDTVTopDown2DActiveWeapon>
{
    public MonoBehaviour CurrentActiveWeapon { get; set; }
    
    GDTVTopDown2DInputActions inputActions;
    float timeBetweenAttacks;


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

        AttackCooldown();
    }


    void Update()
    {
        Attack();
    }


    public void NewWeapon( MonoBehaviour newWeapon )
    {
        CurrentActiveWeapon = newWeapon;
        AttackCooldown();//TODO: Ensure that this call does not mess with future Coroutines
        timeBetweenAttacks = ( CurrentActiveWeapon as GDTVTopDown2DIWeapon).GetWeaponInfo().weaponCooldown;
    }


    public void SetWeaponNull()
    {
        CurrentActiveWeapon = null;
    }


    void AttackCooldown()
    {
        isAttacking = true;
        StopAllCoroutines();
        StartCoroutine( TimeBetweenAttacksRoutine() );
    }


    IEnumerator TimeBetweenAttacksRoutine()
    {
        yield return new WaitForSeconds( timeBetweenAttacks );
        isAttacking = false;
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
        if( attackButtonDown && !isAttacking && CurrentActiveWeapon )
        {
            AttackCooldown();
            ( CurrentActiveWeapon as GDTVTopDown2DIWeapon ).Attack();
        }   
    }
}