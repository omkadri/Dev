using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Button : MonoBehaviour
{
	static GameObject _lastClicked = null;

	public GameObject Defender;

	// Use this for initialization
	void Start()
	{
		Text costText = GetComponentInChildren<Text>();
		Defender defender = Defender.GetComponentInChildren<Defender>( true );
		costText.text = defender.StarCost.ToString();
	}

	// Update is called once per frame
	void Update()
	{

	}

	public static GameObject GetSelectedDefender()
	{
		GameObject defender = null;

		if ( _lastClicked != null )
		{
			Button btn = _lastClicked.GetComponent<Button>();
			if ( btn != null )
			{
				defender = btn.Defender;
			}
		}

		return defender;
	}

	private void OnMouseDown()
	{
		GetComponent<SpriteRenderer>().color = Color.white;
		if ( _lastClicked != null && _lastClicked != gameObject )
		{
			_lastClicked.GetComponent<SpriteRenderer>().color = Color.black;
		}
		_lastClicked = gameObject;
	}
}
