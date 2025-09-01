using UnityEngine;

public class TestSystem : MonoBehaviour
{
    [SerializeField] HandView _handView;

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            CardView cardView = CardViewCreator.Instance.CreateCardView(transform.position, Quaternion.identity);
            StartCoroutine(_handView.AddCard(cardView));
        }
    }
}
