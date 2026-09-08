using UnityEngine;

public class PlayZoneTrigger : MonoBehaviour
{
    [SerializeField] PlayerHand _playerHand;

    void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.TryGetComponent(out Card card))
        {
            _playerHand.PlayCard(card);
        }
    }

    void OnTriggerExit2D(Collider2D collision)
    {
        if(collision.TryGetComponent(out Card card))
        {
        }
    }
}