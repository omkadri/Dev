using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Defender : MonoBehaviour
{
	public int StarCost;
  private StarDisplay _starDisplay;

  private void Start()
  {
    _starDisplay = FindObjectOfType<StarDisplay>();
  }

  public void AddStars( int stars )
  {
    _starDisplay.AddStarsToDisplay( stars );
  }
}
