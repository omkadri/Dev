using Unity.VisualScripting;
using UnityEngine;

public class GDTVTopDown2DBow : MonoBehaviour, GDTVTopDown2DIWeapon
{
    [SerializeField] GDTVTopDown2DWeaponInfoSO weaponInfo;
    [SerializeField] GameObject arrowPrefab;
    [SerializeField] Transform arrowSpawnPoint;

    Animator animator;

    readonly int FIRE_HASH = Animator.StringToHash( "Fire" );//We convert the string into a hash because strings are more expensive in memory. 
                                                            //the hash represents the string as an integer, which allows for faster processing

    void Awake()
    {
        animator = GetComponent<Animator>();
    }


    public void Attack()
    {
        Debug.Log( "Bow Attack" );
        animator.SetTrigger( FIRE_HASH );
        GameObject newArrow = Instantiate( arrowPrefab, arrowSpawnPoint.transform.position, GDTVTopDown2DActiveWeapon.Instance.transform.rotation );
    }


    public GDTVTopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}
