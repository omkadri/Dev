using UnityEngine;

public class TestSystem : MonoBehaviour
{
    [SerializeField] HandView _handView;

    [SerializeField] CardData _cardData;

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            Card card = new(_cardData);
            CardView cardView = CardViewCreator.Instance.CreateCardView(card, transform.position, Quaternion.identity);
            StartCoroutine(_handView.AddCard(cardView));
        }
    }
}
