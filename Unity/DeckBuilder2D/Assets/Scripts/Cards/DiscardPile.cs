using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class DiscardPile : MonoBehaviour
{
    [SerializeField] List<CardData> _discardPile = new List<CardData>();

    [SerializeField] GameObject _cardPrefab;

    [SerializeField] GameObject _cardBack;

    const float VERTICAL_SPACING = 0.2f;


    public void DiscardCard(CardData cardData)
    {
        Debug.Log("Discard card + " + cardData);
        _discardPile.Add(cardData);

        GameObject discardedCard = Instantiate(_cardPrefab, transform);

        discardedCard.GetComponent<Card>().LoadCardData(cardData);
        discardedCard.GetComponent<Card>().SetInteractable(false);

        SortingGroup sortingGroup = discardedCard.GetComponent<SortingGroup>();
        sortingGroup.sortingOrder = _discardPile.Count - 1; //the last card in the deck should have the highest sorting order

        discardedCard.transform.SetParent(transform);

        int index = _discardPile.Count - 1;
        discardedCard.transform.localPosition = new Vector3(0f, (index) * -VERTICAL_SPACING, 0f);
    }
}