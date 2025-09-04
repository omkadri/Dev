using Unity.Mathematics;
using UnityEngine;

public class Staff : MonoBehaviour, IWeapon
{
    [SerializeField] WeaponInfoSO _weaponInfo;
    [SerializeField] GameObject _magicLaser;
    [SerializeField] Transform _magicLaserSpawnPoint;

    Animator _animator;

    readonly int ATTACK_HASH = Animator.StringToHash("Attack");


    void Awake()
    {
        _animator = GetComponent<Animator>();
    }

    
    void Update()
    {
        MouseFollowWithOffset();
    }


    public void Attack()
    {
        Debug.Log("Staff Attack");
        _animator.SetTrigger(ATTACK_HASH);
    }


    public void SpawnStaffProjectileAnimEvent()
    {
        GameObject newLaser = Instantiate(_magicLaser, _magicLaserSpawnPoint.position, quaternion.identity);
        newLaser.GetComponent<StaffLaser>().UpdateLaserRange(_weaponInfo.WeaponRange);
    }


    public WeaponInfoSO GetWeaponInfo()
    {
        return _weaponInfo;
    }


    void MouseFollowWithOffset() //orients the sword relative to the mouse
    {
        Vector2 mousePos = Input.mousePosition;
        Vector2 playerPos = Camera.main.WorldToScreenPoint(PlayerController.Instance.transform.position);

        float angle = Mathf.Atan2(mousePos.y - playerPos.y, Mathf.Abs(mousePos.x - playerPos.x)) * Mathf.Rad2Deg;
        
        if (mousePos.x < playerPos.x)
        {
            ActiveWeapon.Instance.transform.rotation = Quaternion.Euler(0, -180, angle);
        }
        else
        {
            ActiveWeapon.Instance.transform.rotation = Quaternion.Euler(0, 0, angle);
        }
    }
}