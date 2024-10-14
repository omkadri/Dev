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

[CreateAssetMenu(fileName = "NewCard", menuName = "2D Game Object/Playing Cards/Hearts/Card")]
public class HeartsCard2DSO : ScriptableObject {
    public Suit suit;
    public string rank;
    public Sprite sprite;
}
