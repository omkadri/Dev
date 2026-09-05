using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.Rendering;

public class DiscardPile : MonoBehaviour
{
    [SerializeField] List<CardData> _discardPile = new List<CardData>();

    [SerializeField] GameObject _cardPrefab;

    [SerializeField] GameObject _cardBack;

    [SerializeField] Deck _deck; //TODO: tight Coupling

    const float VERTICAL_SPACING = 0.2f;


    public void DiscardCard(CardData cardData)
    {
        _discardPile.Add(cardData);

        GameObject discardedCard = Instantiate(_cardPrefab, transform);

        discardedCard.GetComponent<Card>().LoadCardData(cardData);
        discardedCard.GetComponent<Card>().SetInteractable(false);

        SortingGroup sortingGroup = discardedCard.GetComponent<SortingGroup>();
        sortingGroup.sortingOrder = _discardPile.Count - 1; //the last card in the deck should have the highest sorting order

        discardedCard.transform.SetParent(transform);

        int index = _discardPile.Count - 1;
        discardedCard.transform.localPosition = new Vector3(0f, (index) * VERTICAL_SPACING, 0f);
    }

    public void MoveCardToDeck(List<CardData> drawPile)
    {
        if (drawPile == null || _discardPile.Count == 0)
        {
            return;
        }

        drawPile.AddRange(_discardPile);
        ClearPile();
    }

    void ClearPile()
    {
        _discardPile.Clear();
        foreach (Transform discardedCard in transform)
        {
            Destroy(discardedCard.gameObject);
        }
    }

    void OnMouseDown()
    {
        PlayerEvents.ReshuffleRequested();
        _deck.ReshuffleFromDiscardPile();
    }
}