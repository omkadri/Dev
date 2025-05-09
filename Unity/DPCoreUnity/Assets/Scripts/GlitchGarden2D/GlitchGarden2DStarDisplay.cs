using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GlitchGarden2DStarDisplay : MonoBehaviour
{
    [SerializeField] int _stars = 100;
    Text _starText;


    void Start()
    {
        _starText = GetComponent<Text>();
        UpdateDisplay();
    }


    private void UpdateDisplay()
    {
        _starText.text = _stars.ToString();
    }


    public bool HasEnoughStars( int amount )//TODO: Fixt Tight coupling
    {
        return _stars >= amount;
    }


    public void AddStars( int amount )
    {
        _stars += amount;
        UpdateDisplay();
    }


    public void SpendStars( int amount )
    {
        if ( _stars >= amount )//stops us from spending more stars then we have
        {
            _stars -= amount;
            UpdateDisplay();
        }
    }
}
