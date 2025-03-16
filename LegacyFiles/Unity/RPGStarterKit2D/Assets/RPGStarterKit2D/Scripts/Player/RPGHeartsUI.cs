using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// Updates the UI on our canvas 
public class RPGHeartsUI : MonoBehaviour
{
    [SerializeField] Image[] hearts;
    [SerializeField] Sprite fullHeart;
    [SerializeField] Sprite emptyHeart;
    RPGPlayerHealth player;


    void Awake() 
    {
    }


    void Start() 
    {
        SetHeartsUI();
    }


    void Update() 
    {
        UpdateHearthUI();

        if (player == null) 
        {
            player = FindFirstObjectByType<RPGPlayerHealth>();
        }
    }
    

    void SetHeartsUI() 
    {
        List<Image> allHearts = new List<Image>();

        foreach (Transform child in transform)
        {
            allHearts.Add(child.gameObject.GetComponent<Image>());
        }

        hearts = allHearts.ToArray();
    }
    

    void UpdateHearthUI() 
    {
        if (player == null) { return; }

        if (player.currentHealth > player.maxHealth)
        {
            player.currentHealth = player.maxHealth;
        }

        for (int i = 0; i < hearts.Length; i++)
        {
            if (i < player.currentHealth) 
            {
                hearts[i].sprite = fullHeart;
            } 
            else 
            {
                hearts[i].sprite = emptyHeart;
            }

            if(i < player.maxHealth) 
            {
                hearts[i].enabled = true;
            } 
            else 
            {
                hearts[i].enabled = false;
            }
        }
    }
}