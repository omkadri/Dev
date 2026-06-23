using System;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Deck : MonoBehaviour
{
    [SerializeField] List<CardData> _drawPile = new List<CardData>();
    void Start()
    {
        Debug.Log(DrawCard());
    }

    public CardData DrawCard()
    {
        if (_drawPile.Count > 0)
        {
            //Draw and Remove Top Card
            int topIndex = _drawPile.Count - 1;
            CardData data = _drawPile[topIndex];
            _drawPile.RemoveAt(topIndex);
            return data;
        }
        return null;
    }
}