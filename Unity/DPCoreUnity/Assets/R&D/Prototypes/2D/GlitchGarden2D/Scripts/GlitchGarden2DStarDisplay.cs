using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GlitchGarden2DStarDisplay : MonoBehaviour
{
    [SerializeField] int stars = 100;
    Text starText;
    void Start()
    {
        starText = GetComponent<Text>();
        UpdateDisplay();
    }

    private void UpdateDisplay()
    {
        starText.text = stars.ToString();
    }

    //earning stars
    public void AddStars(int amount)
    {
        stars += amount;
        UpdateDisplay();
    }

    //using stars
    public void SpendStars(int amount)
    {
        if (stars >= amount)//stops us from spending more stars then we have
        {
            stars -= amount;
            UpdateDisplay();
        }
        
    }
}
