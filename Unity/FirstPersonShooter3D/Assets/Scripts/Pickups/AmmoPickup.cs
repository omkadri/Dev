using UnityEngine;

public class AmmoPickup : Pickup
{
    [SerializeField] int _ammoAmount = 100;

    protected override void OnPickup(ActiveWeapon activeWeapon)
    {
        activeWeapon.AdjustAmmo(_ammoAmount);
    }
}
