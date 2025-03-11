using Unity.VisualScripting;
using UnityEngine;

public class TopDown2DBow : MonoBehaviour, TopDown2DIWeapon
{
    [SerializeField] TopDown2DWeaponInfoSO weaponInfo;
    [SerializeField] GameObject arrowPrefab;
    [SerializeField] Transform arrowSpawnPoint;

    Animator animator;

    readonly int FIRE_HASH = Animator.StringToHash( "Fire" );


    void Awake()
    {
        animator = GetComponent<Animator>();
    }


    public void Attack()
    {
        Debug.Log( "Bow Attack" );
        animator.SetTrigger( FIRE_HASH );
        GameObject newArrow = Instantiate( arrowPrefab, arrowSpawnPoint.transform.position, TopDown2DActiveWeapon.Instance.transform.rotation );
        newArrow.GetComponent<TopDown2DProjectile>().UpdateRange( weaponInfo.weaponRange );//TODO: this is a potential conflict with the projectile's base range
    }


    public TopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}