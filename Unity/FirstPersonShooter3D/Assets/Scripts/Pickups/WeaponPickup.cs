using UnityEngine;

public class WeaponPickup : Pickup
{
    [SerializeField] WeaponSO _weaponSO;

    protected override void OnPickup(ActiveWeapon activeWeapon)
    {
        activeWeapon.SwitchWeapon(_weaponSO);
    }
}
