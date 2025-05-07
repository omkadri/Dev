using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DDefenderSpawner : MonoBehaviour
{
    //[SerializeField]  --removed Serialization so designers do not mess it up
    GlitchGarden2DDefender _defender;


    private void OnMouseDown()
    {
        SpawnDefender( GetSquareClicked() );
    }


    public void SetSelectedDefender( GlitchGarden2DDefender defenderToSelect )
    {
        _defender = defenderToSelect;
    }


    private Vector2 GetSquareClicked()
    {
        Vector2 rawMousePos = new Vector2( Input.mousePosition.x, Input.mousePosition.y );
        // creates a vector containing the current mouse coordinates

        Vector2 inGameMousePos = Camera.main.ScreenToWorldPoint( rawMousePos );
        //this gets mouse coordinates relative the withing the game window (as opposed to raw mouse coordinate data)

        Vector2 gridPos = SnapToGrid( inGameMousePos );
        //snaps spawned enemies to grid
        
        return gridPos;
    }
    

    private Vector2 SnapToGrid( Vector2 rawWorldPos )
    {
        float newX = Mathf.RoundToInt( rawWorldPos.x );
        float newY = Mathf.RoundToInt( rawWorldPos.y );
        return new Vector2( newX, newY );
    }


    private void SpawnDefender( Vector2 inGameMousePos ) //this function cannot run without getting the inGameMousePos vector
    {
        if ( _defender )
        {
            GlitchGarden2DDefender newDefender = Instantiate( _defender, inGameMousePos, Quaternion.identity ) as GlitchGarden2DDefender;
            //"as gameObject" allows us to see the instance in the unity hierarchy, as well as interact with it
        }
    }
}

