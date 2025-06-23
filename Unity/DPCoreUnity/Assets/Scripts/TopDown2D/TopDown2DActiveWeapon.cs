using System.Collections;
using UnityEngine;

public class TopDown2DActiveWeapon : Singleton<TopDown2DActiveWeapon>
{
    public MonoBehaviour CurrentActiveWeapon { get; set; }
    
    TopDown2DInputActions inputActions;
    float timeBetweenAttacks;


    bool attackButtonDown = false;
    bool isAttacking = false;


    protected override void Awake()
    {
        base.Awake();

        inputActions = new TopDown2DInputActions();
    }


    void OnEnable()
    {
        inputActions.Enable();
    }


    void OnDisable()
    {
        inputActions?.Disable();
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


    public void NewWeapon(MonoBehaviour newWeapon)
    {
        CurrentActiveWeapon = newWeapon;
        AttackCooldown();//TODO: Ensure that this call does not mess with future Coroutines
        timeBetweenAttacks = (CurrentActiveWeapon as TopDown2DIWeapon).GetWeaponInfo().WeaponCooldown;
    }


    public void SetWeaponNull()
    {
        CurrentActiveWeapon = null;
    }


    void AttackCooldown()
    {
        isAttacking = true;
        StopAllCoroutines();
        StartCoroutine(TimeBetweenAttacksRoutine());
    }


    IEnumerator TimeBetweenAttacksRoutine()
    {
        yield return new WaitForSeconds(timeBetweenAttacks);
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
        if(attackButtonDown && !isAttacking && CurrentActiveWeapon)
        {
            AttackCooldown();
            (CurrentActiveWeapon as TopDown2DIWeapon).Attack();
        }   
    }
}