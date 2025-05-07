using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlitchGarden2DDefenderButton : MonoBehaviour
{
    [SerializeField] GlitchGarden2DDefender _defenderPrefab;


    private void OnMouseDown()
    {
        var buttons = FindObjectsByType<GlitchGarden2DDefenderButton>( FindObjectsSortMode.None ); // finds all objects with DefenderButton script attached to them
        foreach( GlitchGarden2DDefenderButton button in buttons )
        {
            button.GetComponent<SpriteRenderer>().color = new Color32( 41, 41, 41, 255 ); //greys out all DefenderButtons
            FindFirstObjectByType<GlitchGarden2DDefenderSpawner>().SetSelectedDefender( _defenderPrefab ); //passes currently clicks defender into DefenderSpawner
        }

        GetComponent<SpriteRenderer>().color = Color.white;//after all DefenderButtons have their colors reset by the above instructions, this commands brightens the button being clicked on
    }
}
