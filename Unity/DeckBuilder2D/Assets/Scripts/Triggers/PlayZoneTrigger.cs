using UnityEngine;

public class PlayZoneTrigger : MonoBehaviour
{
    [SerializeField] PlayerHand _playerHand;

    void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log("PlayZoneTrigger");
        if(collision.TryGetComponent(out Card card))
        {
            Debug.Log("CARD ENTER");
            _playerHand.PlayCard(card);
        }
    }

    void OnTriggerExit2D(Collider2D collision)
    {
        Debug.Log("PlayZoneTrigger");
        if(collision.TryGetComponent(out Card card))
        {
            Debug.Log("CARD EXIT");
        }
    }
}