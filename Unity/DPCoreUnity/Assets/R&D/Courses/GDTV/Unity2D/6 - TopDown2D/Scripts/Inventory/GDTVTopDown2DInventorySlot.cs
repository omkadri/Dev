using UnityEngine;

public class GDTVTopDown2DInventorySlot : MonoBehaviour
{
    [SerializeField] GDTVTopDown2DWeaponInfoSO weaponInfo;


    public GDTVTopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}
