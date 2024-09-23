using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameTimer : MonoBehaviour
{
	[Range(1,500)]
	public int LevelTime;
	private float _progress = 0.0f;

	private Slider _progressSlider;
	private bool _isLevelOver;
	GameObject _levelCompleteText;


	// Use this for initialization
	void Start()
	{
		_progressSlider = GetComponent<Slider>();
		_progress = 0.0f;
		_levelCompleteText = GameObject.Find("LevelCompleteText");
		if ( _levelCompleteText != null )
		{
			_levelCompleteText.SetActive( false );
		}
	}

	// Update is called once per frame
	void Update()
	{
		_progress += Time.deltaTime;
		float sliderValue = _progress / LevelTime;
		bool levelOver = sliderValue >= 1.0f;
		if ( levelOver && !_isLevelOver )
		{
			LevelFinished();
			_isLevelOver = true;
		}
		_progressSlider.value = sliderValue;
	}

	private void LevelFinished()
	{
		AudioSource src = GetComponent<AudioSource>();
		src.Play();
		if ( _levelCompleteText != null )
		{
			_levelCompleteText.SetActive( true );
		}
		Invoke( "NextLevel", src.clip.length );
	}

	private void NextLevel()
	{
		FindObjectOfType<LevelManager>().LoadNextLevel();
		
	}
}
