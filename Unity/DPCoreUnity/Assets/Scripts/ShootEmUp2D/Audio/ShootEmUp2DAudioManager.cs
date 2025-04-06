using UnityEngine;

public class ShootEmUp2DAudioManager : MonoBehaviour
{
    [SerializeField] float _masterVolume = 1f;
    [SerializeField] ShootEmUp2DSoundSO _playerRangedWeaponShootSFX;//TODO: find better name
    [SerializeField] ShootEmUp2DSoundSO _playerJumpSFX;//TODO: find better name

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


    void PlayProcessedSound( ShootEmUp2DSoundSO soundSO )
    {
        AudioClip clip = soundSO.Clip;
        float volume = soundSO.Volume * _masterVolume;
        float pitch = soundSO.Pitch;
        bool loop = soundSO.Loop;
        //TODO: add playback speed modifier (0.5x, 2x, etc)
        //TODO: add playback speed randomization.

        if( soundSO.RandomizePitch )
        {
            float randomizePitchModifier = Random.Range( -soundSO.RandomPitchRangeModifier, soundSO.RandomPitchRangeModifier );
            pitch = soundSO.Pitch + randomizePitchModifier;
        }

        PlaySound( clip, volume, pitch, loop );
    }


    void PlaySound( AudioClip clip, float volume, float pitch, bool loop )
    {
        GameObject soundObject = new GameObject( "Temp Audio Source" );
        AudioSource audioSource = soundObject.AddComponent<AudioSource>();
        audioSource.clip = clip;
        audioSource.volume = volume;
        audioSource.pitch = pitch;
        audioSource.loop = loop;
        audioSource.Play();
        
        if ( !loop )
        {
            Destroy( soundObject, clip.length );//TODO: implement object pooling
        }
    }


    void RangedWeapon_OnShoot()//TODO: find better naming convention
    {
        PlayProcessedSound( _playerRangedWeaponShootSFX );
    }


    void PlayerController_OnJump()//TODO: find better naming convention
    {
        PlayProcessedSound( _playerJumpSFX );
    }
}