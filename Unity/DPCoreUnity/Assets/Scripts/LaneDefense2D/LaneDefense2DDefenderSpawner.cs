using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DDefenderSpawner : MonoBehaviour
{
    LaneDefense2DDefender _defender;
    GameObject _defenderParent;
    const string DEFENDER_PARENT_NAME = "Defenders";


    void Start()
    {
        CreateDefenderParent(); 
    }


    void CreateDefenderParent()
    {
        _defenderParent = GameObject.Find(DEFENDER_PARENT_NAME); //TODO: Optimize this
        if (!_defenderParent)
        {
            _defenderParent = new GameObject(DEFENDER_PARENT_NAME);
        }
    }


    void OnMouseDown()
    {
        AttemptDefenderPlacement(GetSquareClicked());
    }


    public void SetSelectedDefender(LaneDefense2DDefender defenderToSelect)
    {
        _defender = defenderToSelect;
    }


    void AttemptDefenderPlacement(Vector2 gridPos)
    {
        if (!_defender)
        {
            return;
        }
        
        LaneDefense2DStarDisplay starDisplay = FindFirstObjectByType<LaneDefense2DStarDisplay>();
        int defenderCost = _defender.GetStarCost();
        if (starDisplay.HasEnoughStars(defenderCost))
        {
            SpawnDefender(gridPos);
            starDisplay.SpendStars(defenderCost);
        }
        else
        {
            Debug.Log("Not Enough Stars");
        }
    }


    Vector2 GetSquareClicked()
    {
        Vector2 rawMousePos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);

        Vector2 inGameMousePos = Camera.main.ScreenToWorldPoint(rawMousePos);
        //this gets mouse coordinates relative the withing the game window (as opposed to raw mouse coordinate data)

        Vector2 gridPos = SnapToGrid(inGameMousePos);
        //snaps spawned enemies to grid
        
        return gridPos;
    }
    

    Vector2 SnapToGrid(Vector2 rawWorldPos)
    {
        float newX = Mathf.RoundToInt(rawWorldPos.x);
        float newY = Mathf.RoundToInt(rawWorldPos.y);
        return new Vector2(newX, newY);
    }


    void SpawnDefender(Vector2 inGameMousePos)
    {
        if (_defender)
        {
            LaneDefense2DDefender newDefender = Instantiate(_defender, inGameMousePos, Quaternion.identity) as LaneDefense2DDefender;
            newDefender.transform.parent = _defenderParent.transform;
        }
    }
}