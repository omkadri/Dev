using Unity.Mathematics;
using UnityEngine;

public class TopDown2DStaff : MonoBehaviour, TopDown2DIWeapon
{
    [SerializeField] TopDown2DWeaponInfoSO weaponInfo;
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
        newLaser.GetComponent<TopDown2DStaffLaser>().UpdateLaserRange( weaponInfo.weaponRange );
    }


    public TopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint( TopDown2DPlayerController.Instance.transform.position );

        float angle = Mathf.Atan2( mousePos.y - playerPos.y, Mathf.Abs( mousePos.x - playerPos.x ) ) * Mathf.Rad2Deg;
        
        if ( mousePos.x < playerPos.x )
        {
            TopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, -180, angle );
        }
        else
        {
            TopDown2DActiveWeapon.Instance.transform.rotation = Quaternion.Euler( 0, 0, angle );
        }
    }
}