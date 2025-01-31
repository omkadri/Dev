using UnityEngine;

public class GDTVTopDown2DBow : MonoBehaviour, GDTVTopDown2DIWeapon
{
    [SerializeField] GDTVTopDown2DWeaponInfoSO weaponInfo;
    [SerializeField] GameObject arrowPrefab;
    [SerializeField] Transform arrowSpawnPoint;


    public void Attack()
    {
        Debug.Log( "Bow Attack" );
        GameObject newArrow = Instantiate( arrowPrefab, arrowSpawnPoint.transform.position, GDTVTopDown2DActiveWeapon.Instance.transform.rotation );
    }


    public GDTVTopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}
