using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaneDefense2DDefenderButton : MonoBehaviour
{
    [SerializeField] LaneDefense2DDefender _defenderPrefab;


    private void OnMouseDown()
    {
        LaneDefense2DDefenderButton[] buttons = FindObjectsByType<LaneDefense2DDefenderButton>(FindObjectsSortMode.None); // finds all objects with DefenderButton script attached to them
        foreach(LaneDefense2DDefenderButton button in buttons)
        {
            button.GetComponent<SpriteRenderer>().color = new Color32(41, 41, 41, 255); //greys out all DefenderButtons
            FindFirstObjectByType<LaneDefense2DDefenderSpawner>().SetSelectedDefender(_defenderPrefab); //passes currently clicked defender into DefenderSpawner
        }

        GetComponent<SpriteRenderer>().color = Color.white;//after all DefenderButtons have their colors reset by the above instructions, this commands brightens the button being clicked on
    }
}
