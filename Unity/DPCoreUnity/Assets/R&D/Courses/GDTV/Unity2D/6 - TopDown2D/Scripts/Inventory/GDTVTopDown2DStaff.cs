using Unity.Mathematics;
using UnityEngine;

public class GDTVTopDown2DStaff : MonoBehaviour, GDTVTopDown2DIWeapon
{
    [SerializeField] GDTVTopDown2DWeaponInfoSO weaponInfo;
    [SerializeField] GameObject magicLaser;
    [SerializeField] Transform magicLaserSpawnPoint;

    Animator animator;

    readonly int ATTACK_HASH = Animator.StringToHash( "Attack" );


    void Awake()
    {
        animator = GetComponent<Animator>();
    }

    
    void Update()
    {
        MouseFollowWithOffset();
    }


    public void Attack()
    {
        Debug.Log( "Staff Attack" );
        animator.SetTrigger( ATTACK_HASH );
    }


    public void SpawnStaffProjectileAnimEvent()
    {
        GameObject newLaser = Instantiate( magicLaser, magicLaserSpawnPoint.position, quaternion.identity );
        newLaser.GetComponent<GDTVTopDown2DMagicLaser>().UpdateLaserRange( weaponInfo.weaponRange );
    }


    public GDTVTopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint( GDTVTopDown2DPlayerController.Instance.transform.position );

        float angle = Mathf.Atan2( mousePos.y - playerPos.y, Mathf.Abs( mousePos.x - playerPos.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePos.x < playerPos.x )
        {
            GDTVTopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, -180, angle );
        }
        else
        {
            GDTVTopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, 0, angle );
        }
    }
}