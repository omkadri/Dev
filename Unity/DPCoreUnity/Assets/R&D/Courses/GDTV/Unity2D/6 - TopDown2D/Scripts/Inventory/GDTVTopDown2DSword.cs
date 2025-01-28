using System.Collections;
using UnityEngine;

public class GDTVTopDown2DSword : MonoBehaviour, GDTVTopDown2DIWeapon
{
    [SerializeField] GameObject slashAnimPrefab;
    [SerializeField] Transform slashAnimSpawnPoint;
    [SerializeField] Transform weaponCollider;
    [SerializeField] float swordAttackCooldown = 0.5f;

    Animator animator; 
    GDTVTopDown2DPlayerController playerController;
    GDTVTopDown2DActiveWeapon activeWeapon;

    GameObject slashAnim;


    void Awake()
    {
        playerController = GetComponentInParent<GDTVTopDown2DPlayerController>();
        activeWeapon = GetComponentInParent<GDTVTopDown2DActiveWeapon>();
        animator = GetComponent<Animator>();
    }


    void Update()
    {
        MouseFollowWithOffset();
    }


    public void Attack()
    {
        //isAttacking = true;
        animator.SetTrigger( "Attack" );
        weaponCollider.gameObject.SetActive( true );
        slashAnim = Instantiate( slashAnimPrefab, slashAnimSpawnPoint.position, Quaternion.identity );
        slashAnim.transform.parent = this.transform.parent;
        StartCoroutine( AttackCooldownRoutine() );
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint( playerController.transform.position );

        float angle = Mathf.Atan2( mousePos.y - playerPos.y, Mathf.Abs( mousePos.x - playerPos.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePos.x < playerPos.x )
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
        GDTVTopDown2DActiveWeapon.Instance.ToggleIsAttacking( false );
    }


    public void DoneAttackingAnimEvent()
    {
        weaponCollider.gameObject.SetActive( false );
    }


    public void SwingUpFlipAnimEvent()
    {
        slashAnim.gameObject.transform.rotation = Quaternion.Euler( -180, 0, 0 );

        if ( playerController.isFacingLeft )
        {
            slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }
    

    public void SwingDownFlipAnimEvent()
    {
        slashAnim.gameObject.transform.rotation = Quaternion.Euler( 0, 0, 0 );

        if ( playerController.isFacingLeft )
        {
            slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }
}
