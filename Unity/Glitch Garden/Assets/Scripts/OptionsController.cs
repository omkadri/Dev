using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionsController : MonoBehaviour
{
  public Slider VolumeSlider;
  public Slider DifficultySlider;
  public LevelManager LvlManager;

  private MusicPlayer _musicPlayer;

  // Use this for initialization
  void Start()
  {
    VolumeSlider.value = PlayerPrefsManager.GetMasterVolume();
    DifficultySlider.value = PlayerPrefsManager.GetDifficulty();

    _musicPlayer = FindObjectOfType<MusicPlayer>();
  }

  // Update is called once per frame
  void Update()
  {
    _musicPlayer.ChangeVolume( VolumeSlider.value );
  }

  public void SaveAndExit()
  {
    PlayerPrefsManager.SetMasterVolume( VolumeSlider.value );
    PlayerPrefsManager.SetDifficulty( (int)DifficultySlider.value );
    LvlManager.LoadLevel( "Start" );
  }

  public void SetDefaults()
  {
    PlayerPrefsManager.SetMasterVolume( 0.8f );
    PlayerPrefsManager.SetDifficulty( 2 );
    VolumeSlider.value = 0.8f;
    DifficultySlider.value = 2;
  }
}
