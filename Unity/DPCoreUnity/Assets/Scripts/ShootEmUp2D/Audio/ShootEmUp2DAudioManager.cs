using UnityEngine;
using UnityEngine.Audio;

public class ShootEmUp2DAudioManager : MonoBehaviour
{
    [Range( 0, 2 )]
    [SerializeField] float _masterVolume = 1f;
    [SerializeField] ShootEmUp2DSoundsCollectionSO _soundsCollectionSO;

    [SerializeField] AudioMixerGroup _SFXMixerGroup;
    [SerializeField] AudioMixerGroup _musicMixerGroup;
    [SerializeField] AudioMixerGroup _dialogueMixerGroup;

    AudioSource _currentMusicAudioSource;


    void Start()
    {
        FightMusic();
    }


    void OnEnable()
    {
        ShootEmUp2DRangedWeapon.OnShoot += RangedWeapon_OnShoot;
        ShootEmUp2DPlayerController.OnJump += PlayerController_OnJump;
        ShootEmUp2DHealth.OnDeath += Health_OnDeath;
        ShootEmUp2DDiscoBallManager.OnDiscoBallHit += DiscoBallMusic;
    }


    void OnDisable()
    {
        ShootEmUp2DRangedWeapon.OnShoot -= RangedWeapon_OnShoot;
        ShootEmUp2DPlayerController.OnJump -= PlayerController_OnJump;
        ShootEmUp2DHealth.OnDeath -= Health_OnDeath;
        ShootEmUp2DDiscoBallManager.OnDiscoBallHit -= DiscoBallMusic;
    }


    void PlayRandomSound( SoundSO[] sounds )
    {
        if( sounds != null && sounds.Length > 0 )
        {
            SoundSO soundSO = sounds[Random.Range( 0, sounds.Length )];
            PlayProcessedSound( soundSO );
        }
    }


    void PlayProcessedSound( SoundSO soundSO )
    {
        AudioClip clip = soundSO.Clip;
        float volume = soundSO.Volume * _masterVolume;
        float pitch = soundSO.Pitch;
        bool loop = soundSO.Loop;
        AudioMixerGroup audioMixerGroup;
        //TODO: add playback speed modifier (0.5x, 2x, etc)
        //TODO: add playback speed randomization.

        if( soundSO.RandomizePitch )
        {
            float randomizePitchModifier = Random.Range( -soundSO.RandomPitchRangeModifier, soundSO.RandomPitchRangeModifier );
            pitch = soundSO.Pitch + randomizePitchModifier;
        }

        switch( soundSO.AudioType )
        {
            case SoundSO.AudioTypes.SFX:
                audioMixerGroup = _SFXMixerGroup;
                break;
            case SoundSO.AudioTypes.Music:
                audioMixerGroup = _musicMixerGroup;
                break;
            case SoundSO.AudioTypes.Dialogue:
                audioMixerGroup = _dialogueMixerGroup;
                break;
            default:
                audioMixerGroup = null;
                break;
        }

        PlaySound( clip, volume, pitch, loop, audioMixerGroup );
    }


    void PlaySound( AudioClip clip, float volume, float pitch, bool loop, AudioMixerGroup audioMixerGroup )
    {
        GameObject soundObject = new GameObject( "Temp Audio Source" );
        AudioSource audioSource = soundObject.AddComponent<AudioSource>();
        audioSource.clip = clip;
        audioSource.volume = volume;
        audioSource.pitch = pitch;
        audioSource.loop = loop;
        audioSource.outputAudioMixerGroup = audioMixerGroup;
        audioSource.Play();
        
        if ( !loop )
        {
            Destroy( soundObject, clip.length );//TODO: implement object pooling
        }

        if( audioMixerGroup == _musicMixerGroup )
        {
            if( _currentMusicAudioSource != null )
            {
                _currentMusicAudioSource.Stop();//ensure only one music track can play at a time
            }

            _currentMusicAudioSource = audioSource;
        }
    }


    void RangedWeapon_OnShoot()//TODO: find better naming convention
    {
        PlayRandomSound( _soundsCollectionSO.PlayerRangedWeaponShootSFX );
    }


    void PlayerController_OnJump()//TODO: find better naming convention
    {
        PlayRandomSound( _soundsCollectionSO.PlayerJumpSFX );
    }


    void Health_OnDeath( ShootEmUp2DHealth health )//TODO: Investigate differentiating between player health and enemy health???
    {
        PlayRandomSound( _soundsCollectionSO.SplatSFX );
    }


    void FightMusic()
    {
        PlayRandomSound( _soundsCollectionSO.FightMusic );
    }


    void DiscoBallMusic()
    {
        PlayRandomSound( _soundsCollectionSO.DiscoPartyMusic );
        float soundLength = _soundsCollectionSO.DiscoPartyMusic[0].Clip.length;
        Invoke( "FightMusic", soundLength );//this continues fight music after disco mucic ends
        //TODO: implement a way to ensure that soundLength is equal to the legth of the disco party time event 
    }
}