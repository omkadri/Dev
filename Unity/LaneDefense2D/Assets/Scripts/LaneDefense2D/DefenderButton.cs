using UnityEngine;
using TMPro;

public class DefenderButton : MonoBehaviour
{
    [SerializeField] Defender _defenderPrefab;


    void Start()
    {
        LabelButtonWithCost();
    }


    void LabelButtonWithCost()
    {
        TMP_Text costText = GetComponentInChildren<TMP_Text>();
        if (!costText)
        {
            Debug.LogError(name + " has no cost text.");
        }
        else
        {
            costText.text = _defenderPrefab.GetStarCost().ToString();
        }
    }


    private void OnMouseDown()
    {
        DefenderButton[] buttons = FindObjectsByType<DefenderButton>(FindObjectsSortMode.None); // finds all objects with DefenderButton script attached to them
        foreach (DefenderButton button in buttons)
        {
            button.GetComponent<SpriteRenderer>().color = new Color32(41, 41, 41, 255); //greys out all DefenderButtons
            FindFirstObjectByType<DefenderSpawner>().SetSelectedDefender(_defenderPrefab); //passes currently clicked defender into DefenderSpawner
        }

        GetComponent<SpriteRenderer>().color = Color.white;//after all DefenderButtons have their colors reset by the above instructions, this commands brightens the button being clicked on
    }
}
