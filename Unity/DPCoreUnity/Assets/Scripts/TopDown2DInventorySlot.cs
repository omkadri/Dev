using UnityEngine;

public class TopDown2DInventorySlot : MonoBehaviour
{
    [SerializeField] TopDown2DWeaponInfoSO weaponInfo;


    public TopDown2DWeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}