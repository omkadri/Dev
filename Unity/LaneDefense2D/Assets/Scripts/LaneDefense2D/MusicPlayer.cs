using UnityEngine;

public class MusicPlayer : Singleton<MusicPlayer>
{
    AudioSource _audioSource;


    protected override void Awake()
    {
        base.Awake();
        _audioSource = GetComponent<AudioSource>();
    }


    void Start()
    {
        DontDestroyOnLoad(this);
        _audioSource.volume = PlayerPrefsController.GetMasterVolume();
    }

    public void SetVolume(float volume)
    {
        _audioSource.volume = volume;
    }
}