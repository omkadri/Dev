using UnityEngine;

public class ShootEmUp2DAudioManager : MonoBehaviour
{
    [SerializeField] ShootEmUp2DSoundSO _rangedWeaponShoot;//TODO: find better name
    [SerializeField] ShootEmUp2DSoundSO _playerJump;//TODO: find better name

    void OnEnable()
    {
        ShootEmUp2DRangedWeapon.OnShoot += RangedWeapon_OnShoot;
        ShootEmUp2DPlayerController.OnJump += PlayerController_OnJump;
    }


    void OnDisable()
    {
        ShootEmUp2DRangedWeapon.OnShoot -= RangedWeapon_OnShoot;
        ShootEmUp2DPlayerController.OnJump -= PlayerController_OnJump;
    }


    void PlaySound( ShootEmUp2DSoundSO soundSO)
    {
        GameObject soundObject = new GameObject( "Temp Audio Source" );
        AudioSource audioSource = soundObject.AddComponent<AudioSource>();
        audioSource.clip = soundSO.Clip;
        audioSource.Play();
    }


    void RangedWeapon_OnShoot()//TODO: find better naming convention
    {
        PlaySound( _rangedWeaponShoot );
    }


    void PlayerController_OnJump()//TODO: find better naming convention
    {
        PlaySound( _playerJump );
    }
}