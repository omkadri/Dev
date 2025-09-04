using Unity.VisualScripting;
using UnityEngine;

public class Bow : MonoBehaviour, IWeapon
{
    [SerializeField] WeaponInfoSO weaponInfo;
    [SerializeField] GameObject arrowPrefab;
    [SerializeField] Transform arrowSpawnPoint;

    Animator animator;

    readonly int FIRE_HASH = Animator.StringToHash("Fire");


    void Awake()
    {
        animator = GetComponent<Animator>();
    }


    public void Attack()
    {
        Debug.Log("Bow Attack");
        animator.SetTrigger(FIRE_HASH);
        GameObject newArrow = Instantiate(arrowPrefab, arrowSpawnPoint.transform.position, ActiveWeapon.Instance.transform.rotation);
        newArrow.GetComponent<Projectile>().UpdateRange(weaponInfo.WeaponRange);//TODO: this is a potential conflict with the projectile's base range
    }


    public WeaponInfoSO GetWeaponInfo()
    {
        return weaponInfo;
    }
}