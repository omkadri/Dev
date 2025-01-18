using System.Collections;
using UnityEngine;

public class GDTVTopDownAction2DSword : MonoBehaviour
{
    [SerializeField] GameObject slashAnimPrefab;
    [SerializeField] Transform slashAnimSpawnPoint;
    [SerializeField] Transform weaponCollider;
    [SerializeField] float swordAttackCooldown = 0.5f;

    GDTVTopDownAction2DInputActions playerInputActions;
    Animator animator; 
    GDTVTopDownAction2DPlayerController playerController;
    GDTVTopDownAction2DActiveWeapon activeWeapon;
    bool attackButtonDown = false;
    bool isAttacking = false;

    GameObject slashAnim;


    void Awake()
    {
        playerController = GetComponentInParent<GDTVTopDownAction2DPlayerController>();
        activeWeapon = GetComponentInParent<GDTVTopDownAction2DActiveWeapon>();
        animator = GetComponent<Animator>();
        playerInputActions = new GDTVTopDownAction2DInputActions();
    }


    void OnEnable()
    {
        playerInputActions.Enable();
    }


    void Start()
    {
        playerInputActions.Combat.Attack.started += _ => StartAttacking(); // += _ => is a way to subscribe a function to an input action
        playerInputActions.Combat.Attack.canceled += _ => StopAttacking();
    }


    void Update()
    {
        MouseFollowWithOffset();
        Attack();
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
            animator.SetTrigger( "Attack" );
            weaponCollider.gameObject.SetActive( true );
            slashAnim = Instantiate( slashAnimPrefab, slashAnimSpawnPoint.position, Quaternion.identity );
            slashAnim.transform.parent = this.transform.parent;
            StartCoroutine( AttackCooldownRoutine() );
        }
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePosition = Input.mousePosition;
        Vector2 playerPosition = Camera.main.WorldToScreenPoint( playerController.transform.position );

        float angle = Mathf.Atan2( mousePosition.y - playerPosition.y, Mathf.Abs( mousePosition.x - playerPosition.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePosition.x < playerPosition.x )
        {
            activeWeapon.transform.rotation = Quaternion.Euler( 0, -180, angle );
            weaponCollider.transform.rotation = Quaternion.Euler( 0, -180, 0 );
        }
        else
        {
            activeWeapon.transform.rotation = Quaternion.Euler( 0, 0, angle );
            weaponCollider.transform.rotation = Quaternion.Euler( 0, 0, 0 );
        }
    }


    IEnumerator AttackCooldownRoutine()
    {
        yield return new WaitForSeconds( swordAttackCooldown );
        isAttacking = false;
    }


    public void DoneAttackingAnimEvent()
    {
        weaponCollider.gameObject.SetActive( false );
    }


    public void SwingUpFlipAnimEvent()
    {
        slashAnim.gameObject.transform.rotation = Quaternion.Euler( -180, 0, 0 );

        if( playerController.isFacingLeft )
        {
            slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }
    

    public void SwingDownFlipAnimEvent()
    {
        slashAnim.gameObject.transform.rotation = Quaternion.Euler( 0, 0, 0 );

        if( playerController.isFacingLeft )
        {
            slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }
}
