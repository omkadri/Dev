using UnityEngine;

[CreateAssetMenu(fileName = "New Item", menuName = "RPGItem")]
public class Item : ScriptableObject
{
    public string itemType;
    public GameObject useItemPrefab;
}