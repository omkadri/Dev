using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DDefenderSpawner : MonoBehaviour
{
    //[SerializeField]  --removed Serialization so designers do not mess it up
    LaneDefense2DDefender _defender;


    private void OnMouseDown()
    {
        AttemptDefenderPlacement( GetSquareClicked() );
    }


    public void SetSelectedDefender( LaneDefense2DDefender defenderToSelect )
    {
        _defender = defenderToSelect;
    }


    void AttemptDefenderPlacement( Vector2 gridPos )
    {
        if (!_defender)
        {
            return;
        }
        
        LaneDefense2DStarDisplay starDisplay = FindFirstObjectByType<LaneDefense2DStarDisplay>();
        int defenderCost = _defender.GetStarCost();
        if ( starDisplay.HasEnoughStars( defenderCost ) )
        {
            SpawnDefender( gridPos );
            starDisplay.SpendStars( defenderCost );
        }
        else
        {
            Debug.Log("Not Enough Stars");
        }
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
            LaneDefense2DDefender newDefender = Instantiate( _defender, inGameMousePos, Quaternion.identity ) as LaneDefense2DDefender;
            //"as gameObject" allows us to see the instance in the unity hierarchy, as well as interact with it
        }
    }
}

