using System.Collections;
using UnityEngine;

public class GDTVTopDown2DSword : MonoBehaviour, GDTVTopDown2DIWeapon
{
    [SerializeField] GameObject slashAnimPrefab;
    [SerializeField] GDTVTopDown2DWeaponInfoSO weaponInfo;

    Animator animator; 
    Transform weaponCollider;
    Transform slashAnimSpawnPoint;
    GameObject slashAnim;


    void Awake()
    {
        animator = GetComponent<Animator>();
    }


    void Start()
    {
        weaponCollider = GDTVTopDown2DPlayerController.Instance.GetWeaponCollider();
        slashAnimSpawnPoint = GDTVTopDown2DPlayerController.Instance.GetSlashAnimSpawnPoint();
    }


    void Update()
    {
        MouseFollowWithOffset();
    }


    public void Attack()
    {
        animator.SetTrigger( "Attack" );
        weaponCollider.gameObject.SetActive( true );
        slashAnim = Instantiate( slashAnimPrefab, slashAnimSpawnPoint.position, Quaternion.identity );
        slashAnim.transform.parent = this.transform.parent;
    }


    public GDTVTopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }


    public void DoneAttackingAnimEvent()
    {
        weaponCollider.gameObject.SetActive( false );
    }


    public void SwingUpFlipAnimEvent()
    {
        slashAnim.gameObject.transform.rotation = Quaternion.Euler( -180, 0, 0 );

        if ( GDTVTopDown2DPlayerController.Instance.isFacingLeft )
        {
            slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }
    

    public void SwingDownFlipAnimEvent()
    {
        slashAnim.gameObject.transform.rotation = Quaternion.Euler( 0, 0, 0 );

        if ( GDTVTopDown2DPlayerController.Instance.isFacingLeft )
        {
            slashAnim.GetComponent<SpriteRenderer>().flipX = true;
        }
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint( GDTVTopDown2DPlayerController.Instance.transform.position );

        float angle = Mathf.Atan2( mousePos.y - playerPos.y, Mathf.Abs( mousePos.x - playerPos.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePos.x < playerPos.x )
        {
            GDTVTopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, -180, angle );
            weaponCollider.transform.rotation = Quaternion.Euler( 0, -180, 0 );
        }
        else
        {
            GDTVTopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, 0, angle );
            weaponCollider.transform.rotation = Quaternion.Euler( 0, 0, 0 );
        }
    }
}
