using UnityEngine;

public class GDTVTopDown2DBow : MonoBehaviour, GDTVTopDown2DIWeapon
{
    [SerializeField] GDTVTopDown2DWeaponInfoSO weaponInfo;


    public void Attack()
    {
        Debug.Log( "Bow Attack" );
    }


    public GDTVTopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}
