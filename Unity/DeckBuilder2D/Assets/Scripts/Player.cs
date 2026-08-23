using UnityEngine;

public class Player : MonoBehaviour
{
    void OnEnable()
    {
        PlayerEvents.OnCardPlayed += HandleCardPlayed;
    }

    void OnDisable()
    {
        PlayerEvents.OnCardPlayed -= HandleCardPlayed;
    }

    void HandleCardPlayed(CardData cardData)
    {
        Debug.Log("Handler Ran");
    }
}