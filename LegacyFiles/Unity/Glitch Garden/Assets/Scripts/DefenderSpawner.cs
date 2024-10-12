using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefenderSpawner : MonoBehaviour
{

	public float mouseX, mouseY;

	GameObject _defenderParent;

	private StarDisplay _starDisplay;

	// Use this for initialization
	void Start()
	{
		_defenderParent = GameObject.Find( "Defenders" );
		if ( _defenderParent == null )
		{
			_defenderParent = new GameObject( "Defenders" );
		}
		_starDisplay = FindObjectOfType<StarDisplay>();
	}

	// Update is called once per frame
	void Update()
	{
		Vector3 clickPos = CalculateWorldMousePosition( Input.mousePosition );
		mouseX = clickPos.x;
		mouseY = clickPos.y;
	}

	private void OnMouseDown()
	{

		Vector3 clickPos = CalculateWorldMousePosition( Input.mousePosition );

		GameObject prefab = Button.GetSelectedDefender();
		if ( prefab == null )
		{
			return;
		}

		//	check we can afford the defender
		Defender defObj = prefab.GetComponentInChildren<Defender>( true );
		if ( _starDisplay.UseStars( defObj.StarCost ) == StarDisplay.StarStatus.InsufficentStars )
		{
			return;
		}

		// TODO check for existing object at the current position


		//	Instantiate and position the prefab
		GameObject def = Instantiate( prefab ) as GameObject;
		def.transform.position = clickPos;
		def.transform.parent = _defenderParent.transform;
	}

	Vector3 CalculateWorldMousePosition( Vector3 mousePos )
	{
		Vector3 pos = Camera.main.ScreenToWorldPoint( mousePos );

		return new Vector3( Mathf.RoundToInt( pos.x ), Mathf.RoundToInt( pos.y ), 0.0f );
	}



}
