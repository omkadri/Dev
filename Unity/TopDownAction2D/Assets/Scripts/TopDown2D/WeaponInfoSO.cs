using UnityEngine;
[CreateAssetMenu(menuName = "Game Object/New Weapon", fileName = "New Weapon")]
public class WeaponInfoSO : ScriptableObject
{
    public GameObject WeaponPrefab;
    public float WeaponCooldown;
    public int WeaponDamage;
    public float WeaponRange;
}