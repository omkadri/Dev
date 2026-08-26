using UnityEngine;

public enum StatusEffect
{
    None,
    Poison,
    Bleed,
    Stunned,
    Strength,
    Intoxicated,
    Vulnerable,
    Regeneration
}

[CreateAssetMenu(fileName = "CardData", menuName = "Scriptable Objects/CardData")]
public class CardData : ScriptableObject
{
    public string CardName;

    public string Description;

    public int ActionCost;

    public Sprite Illustration;

    public int AttackPower;

    public int HealPower;

    public StatusEffect StatusEffect;

    public int StatusDurationTurns;
}