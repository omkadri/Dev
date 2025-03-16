using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RPGRupeeWallet : MonoBehaviour
{
    public int currentRupees;
    
    [SerializeField] TMP_Text rupeeText;


    void Update() 
    {
        UpdateRupeeText();
    }


    public void UpdateRupeeText() 
    {
        rupeeText.text = currentRupees.ToString("D3");
    }
    

    public void IncreaseRupeeCount(int amount) 
    {
        currentRupees += amount;
    }
}