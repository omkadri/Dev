using UnityEngine;

[CreateAssetMenu(fileName = "New Item", menuName = "Game Object/2D/RPGStarterKit2D/RPG Item")]
public class Item : ScriptableObject
{
    public string itemType;
    public GameObject useItemPrefab;
}