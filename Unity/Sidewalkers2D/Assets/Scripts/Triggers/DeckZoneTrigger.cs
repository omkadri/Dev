using UnityEngine;

public class DeckZoneTrigger : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.TryGetComponent(out Card card))
        {
            DeckEvents.AddCardToDeck(card.GetCardData());
            Debug.Log("Added Card To Deck");
        }
    }
}
