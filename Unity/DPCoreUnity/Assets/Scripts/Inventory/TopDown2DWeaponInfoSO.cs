using UnityEngine;
[CreateAssetMenu(menuName = "Game Object/2D/TopDown2D/New Weapon", fileName = "New Weapon")]
public class TopDown2DWeaponInfoSO : ScriptableObject
{
    public GameObject weaponPrefab;
    public float weaponCooldown;
    public int weaponDamage;
    public float weaponRange;
}