using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "DeckPreset", menuName = "Scriptable Objects/DeckPreset")]
public class DeckPreset : ScriptableObject
{
    public List<CardData> Cards = new List<CardData>();
}
