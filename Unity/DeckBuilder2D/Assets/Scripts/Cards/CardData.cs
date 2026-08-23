using UnityEngine;

[CreateAssetMenu(fileName = "CardData", menuName = "Scriptable Objects/CardData")]
public class CardData : ScriptableObject
{
    public string CardName;

    public string Description;

    public int ActionCost;

    public Sprite Illustration;

    public int AttackPower;

    public int HealPower;
}