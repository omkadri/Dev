using UnityEngine;

public class LaneDefense2DMusicPlayer : Singleton<LaneDefense2DMusicPlayer>
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
        _audioSource.volume = LaneDefense2DPlayerPrefsController.GetMasterVolume();
    }

    public void SetVolume(float volume)
    {
        _audioSource.volume = volume;
    }
}