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

[CreateAssetMenu(fileName = "NewCard", menuName = "Game Object/2D/PlayingCards2D/Hearts2D/Hearts Card")]
public class HeartsCard2DSO : ScriptableObject {
    public Suit suit;
    public string rank;
    public Sprite sprite;
}