using UnityEngine;

public class PlayZoneTrigger : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log("PlayZoneTrigger");
        if(collision.TryGetComponent(out Card card))
        {
            Debug.Log("CARD ENTER");
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