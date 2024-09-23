using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent( typeof( Text ) )]
public class StarDisplay : MonoBehaviour
{
	public enum StarStatus { EnoughStars, InsufficentStars };

	private int _starCount = 80;

	public Text StarCounterText;

	private void Start()
	{
		UpdateDisplay();
	}

	public void AddStarsToDisplay( int stars )
	{
		_starCount += stars;

		//  update display
		UpdateDisplay();
	}

	private void UpdateDisplay()
	{
		StarCounterText.text = _starCount.ToString();
	}

	public StarStatus UseStars( int stars )
	{
		if ( _starCount >= stars )
		{
			_starCount -= stars;
			UpdateDisplay();
			return StarStatus.EnoughStars;
		}
		return StarStatus.InsufficentStars;
	}
}
