using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Suit {
    Hearts,
    Diamonds,
    Clubs,
    Spades,
    Joker
}

[CreateAssetMenu(fileName = "NewCard", menuName = "Game Object/2D/Playing Cards/Hearts/HeartsCard2D")]
public class HeartsCard2DSO : ScriptableObject {
    public Suit suit;
    public string rank;
    public Sprite sprite;
}
