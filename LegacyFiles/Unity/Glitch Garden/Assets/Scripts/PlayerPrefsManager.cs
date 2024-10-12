using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerPrefsManager : MonoBehaviour
{
  #region Preference Constants
  /// <summary>
  /// Master Volume player preferences constant
  /// </summary>
  const string MASTER_VOLUME_KEY = "Master Volume";

  /// <summary>
  /// Difficulty player preferences constant
  /// </summary>
  const string DIFFICULTY_KEY = "Difficulty";

  /// <summary>
  /// Level unlocking player preferences constant
  /// </summary>
  const string LEVEL_KEY = "Level Unlocked_";
  // Use this for initialization
  #endregion

  public static void SetMasterVolume( float volume )
  {
    if ( volume >= 0.0f && volume <= 1.0f )
    {
      PlayerPrefs.SetFloat( MASTER_VOLUME_KEY, volume );
    }
    else
    {
      Debug.LogError( "Volume invalid - out of range: " + volume.ToString() );
    }
  }

  public static float GetMasterVolume()
  {
    return PlayerPrefs.GetFloat( MASTER_VOLUME_KEY, 0.8f );
  }

  public static void UnlockLevel( int level )
  {
    if ( level < SceneManager.sceneCountInBuildSettings - 1 )
    {
      PlayerPrefs.SetInt( LEVEL_KEY + level.ToString(), 1 );
    }
    else
    {
      Debug.LogError( "Invalid Level not in build order: " + level.ToString() );
    }
  }

  public static bool IsLevelUnlocked( int level )
  {
    if ( level < SceneManager.sceneCountInBuildSettings - 1 )
    {
      return PlayerPrefs.GetInt( LEVEL_KEY + level.ToString(), 0 ) != 0;
    }
    else
    {
      Debug.LogError( "Invalid Level not in build order: " + level.ToString() );
      return false;
    }
  }


  public static void SetDifficulty( int difficulty )
  {
    if ( difficulty >= 1 && difficulty <= 3 )
    {
      PlayerPrefs.SetInt( DIFFICULTY_KEY, difficulty );
    }
    else
    {
      Debug.LogError( "Difficulty invalid - out of range: " + difficulty.ToString() );
    }
  }

  public static float GetDifficulty()
  {
    return PlayerPrefs.GetInt( DIFFICULTY_KEY, 2 );
  }
}
