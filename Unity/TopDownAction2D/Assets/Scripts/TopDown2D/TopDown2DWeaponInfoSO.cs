using UnityEngine;
[CreateAssetMenu(menuName = "Game Object/2D/TopDown2D/New Weapon", fileName = "New Weapon")]
public class TopDown2DWeaponInfoSO : ScriptableObject
{
    public GameObject WeaponPrefab;
    public float WeaponCooldown;
    public int WeaponDamage;
    public float WeaponRange;
}