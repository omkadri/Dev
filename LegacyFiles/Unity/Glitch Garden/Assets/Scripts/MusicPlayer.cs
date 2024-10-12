using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MusicPlayer : MonoBehaviour
{
	public AudioClip[] MusicToPlay;

	static MusicPlayer instance = null;
	static int _playing = 0;
	private AudioSource music;

	private void Awake()
	{
		if ( ( instance != null && instance != this ) || MusicToPlay.Length == 0 )
		{
			Destroy( gameObject );
			music = instance.GetComponent<AudioSource>();
		}
		else
		{
			instance = this;
			GameObject.DontDestroyOnLoad( gameObject );
			music = GetComponent<AudioSource>();
			music.volume = PlayerPrefsManager.GetMasterVolume();
			SceneManager.activeSceneChanged += OnSceneLoaded;
		}
	}

	private void OnDestroy()
	{
		if ( instance == this )
		{
			SceneManager.activeSceneChanged -= OnSceneLoaded;
		}
	}

	void OnSceneLoaded( Scene scene, Scene scene2 )
	{
		PlayMusic();
	}

	private void PlayMusic()
	{
		int musicIndex = SceneManager.GetActiveScene().buildIndex;
		if ( MusicToPlay.Length == 1 && music.clip != null )
		{
			return;
		}

		if ( musicIndex >= MusicToPlay.Length )
		{
			musicIndex = 0;
		}
		else
		{
			while ( musicIndex > 0 && MusicToPlay[ musicIndex ] == null )
			{
				--musicIndex;
			}
		}

		if ( music.isPlaying && _playing == musicIndex )
		{
			return;
		}

		if ( MusicToPlay[ musicIndex ] != null )
		{
			_playing = musicIndex;
			music = GetComponent<AudioSource>();
			music.Stop();
			music.clip = MusicToPlay[ musicIndex ];
			music.Play();
		}
	}

	public void ChangeVolume( float volume )
	{
		music = GetComponent<AudioSource>();
		music.volume = volume;
	}
}
