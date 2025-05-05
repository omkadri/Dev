using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class ShootEmUp2DAudioManager : MonoBehaviour
{
    public static ShootEmUp2DAudioManager Instance;

    [Range( 0, 2 )]
    [SerializeField] float _masterVolume = 1f;
    [SerializeField] ShootEmUp2DSoundsCollectionSO _soundsCollectionSO;

    [SerializeField] AudioMixerGroup _SFXMixerGroup;
    [SerializeField] AudioMixerGroup _musicMixerGroup;
    [SerializeField] AudioMixerGroup _dialogueMixerGroup;

    AudioSource _currentMusicAudioSource;

        #region Unity Functions


    void Awake()
    {
        if ( Instance == null ) { Instance = this; }     
    }


    void Start()
    {
        FightMusic();
    }


    void OnEnable()
    {
        ShootEmUp2DRangedWeapon.OnShoot += RangedWeapon_OnShoot;
        ShootEmUp2DRangedWeapon.OnGrenadeShoot += RangedWeapon_OnGrenadeShoot;
        ShootEmUp2DPlayerController.OnJump += PlayerController_OnJump;
        ShootEmUp2DPlayerController.OnJetpack += PlayerController_OnJetpack;
        ShootEmUp2DHealth.OnDeath += HandleDeath;
        ShootEmUp2DDiscoBallManager.OnDiscoBallHit += DiscoBallMusic;
    }


    void OnDisable()
    {
        ShootEmUp2DRangedWeapon.OnShoot -= RangedWeapon_OnShoot;
        ShootEmUp2DRangedWeapon.OnGrenadeShoot -= RangedWeapon_OnGrenadeShoot;
        ShootEmUp2DPlayerController.OnJump -= PlayerController_OnJump;
        ShootEmUp2DPlayerController.OnJetpack -= PlayerController_OnJetpack;
        ShootEmUp2DHealth.OnDeath -= HandleDeath;
        ShootEmUp2DDiscoBallManager.OnDiscoBallHit -= DiscoBallMusic;
    }

    #endregion

    #region Sound Functions

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

                pitch = RandomizePitch( soundSO, pitch );
                audioMixerGroup = DetermineAudioMixerGroup( soundSO );

                PlaySound( clip, volume, pitch, loop, audioMixerGroup );
        }


        AudioMixerGroup DetermineAudioMixerGroup( SoundSO soundSO )
        {
                AudioMixerGroup audioMixerGroup;
                switch (soundSO.AudioType)
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

                return audioMixerGroup;
        }


        float RandomizePitch(SoundSO soundSO, float pitch)
        {
                if (soundSO.RandomizePitch)
                {
                        float randomizePitchModifier = Random.Range( -soundSO.RandomPitchRangeModifier, soundSO.RandomPitchRangeModifier );
                        pitch = soundSO.Pitch + randomizePitchModifier;
                }

                return pitch;
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

                DetermineMusic( clip, loop, audioMixerGroup, soundObject, audioSource );
        }
    

        void DetermineMusic(AudioClip clip, bool loop, AudioMixerGroup audioMixerGroup, GameObject soundObject, AudioSource audioSource)
        {
                if (!loop)
                {
                        Destroy( soundObject, clip.length );//TODO: implement object pooling
                }

                if ( audioMixerGroup == _musicMixerGroup )
                {
                        if ( _currentMusicAudioSource != null )
                        {
                                _currentMusicAudioSource.Stop();//ensure only one music track can play at a time
                        }

                        _currentMusicAudioSource = audioSource;
                }
        }

        #endregion

        #region SFX

        void RangedWeapon_OnShoot()//TODO: find better naming convention
    {
        PlayRandomSound( _soundsCollectionSO.PlayerRangedWeaponShootSFX );
    }


    void PlayerController_OnJump()//TODO: find better naming convention
    {
        PlayRandomSound( _soundsCollectionSO.PlayerJumpSFX );
    }


    void PlayerController_OnJetpack()
    {
        PlayRandomSound( _soundsCollectionSO.JetpackSFX );
    }


    public void Grenade_OnGrenadeBeep()
    {
        PlayRandomSound( _soundsCollectionSO.GrenadeBeepSFX );
    }


    public void Grenade_OnGrenadeExplode()
    {
        PlayRandomSound( _soundsCollectionSO.GrenadeExplodeSFX );
    }


    void RangedWeapon_OnGrenadeShoot()
    {
        PlayRandomSound( _soundsCollectionSO.GrenadeShootSFX );
    }


    void AudioManager_MegaKill()
    {
        PlayRandomSound( _soundsCollectionSO.MegaKill );
    }


    public void Enemy_OnPlayerHit()
    {
        PlayRandomSound( _soundsCollectionSO.PlayerHit );
    }


    void Health_OnDeath( ShootEmUp2DHealth health )//TODO: Investigate differentiating between player health and enemy health???
    {
        PlayRandomSound( _soundsCollectionSO.SplatSFX );
    }


    void Health_OnDeath()//TODO: Investigate unifying this with above function
    {
        PlayRandomSound( _soundsCollectionSO.SplatSFX );
    }


    #endregion

    #region Music


    void FightMusic()
    {
        PlayRandomSound( _soundsCollectionSO.FightMusic );
    }


    void DiscoBallMusic()
    {
        PlayRandomSound( _soundsCollectionSO.DiscoPartyMusic );
        float soundLength = _soundsCollectionSO.DiscoPartyMusic[0].Clip.length;
        Utils.RunAfterDelay( this, soundLength, FightMusic);//this continues fight music after disco mucic ends
        //TODO: implement a way to ensure that soundLength is equal to the legth of the disco party time event 
    }

    #endregion

    #region Custom SFX Logic


    List<ShootEmUp2DHealth> _deathList = new List<ShootEmUp2DHealth>();
    Coroutine _deathCoroutine;

    void HandleDeath( ShootEmUp2DHealth health )
    {
        bool isEnemy = health.GetComponent<ShootEmUp2DEnemy>();

        if( isEnemy )
        {
            _deathList.Add( health );
        }

        if( _deathCoroutine == null )
        {
            _deathCoroutine = StartCoroutine( DeathWindowRoutine() );
        }
    }


    IEnumerator DeathWindowRoutine()
    {
        yield return null;//coroutine doesn’t do the mega kill check until the next frame, which gives other enemies a chance to die in the same frame

        int megaKillAmount = 3; //TODO: make this a serialized field

        if( _deathList.Count >= megaKillAmount )
        {
            AudioManager_MegaKill();
        }

        Health_OnDeath();

        _deathList.Clear();
        _deathCoroutine = null;
    }

    #endregion
}