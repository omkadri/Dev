using System.Collections.Generic;
using UnityEngine;

public class CardCollection : MonoBehaviour
{
    [SerializeField] List<CardData> _availbaleCards;

    [SerializeField] Transform[] _cardSlots;

    [SerializeField] GameObject _cardPrefab;

    void Start()
    {
        for (int i = 0; i < _availbaleCards.Count; i++)
        {
            AddCardToCollection(i);
        }
    }

    void AddCardToCollection(int cardindex)
    {
        GameObject card = Instantiate(_cardPrefab, _cardSlots[cardindex].position, Quaternion.identity);
        Card cardComponent = card.GetComponent<Card>();
        cardComponent.LoadCardData(_availbaleCards[cardindex]);
        card.transform.SetParent(_cardSlots[cardindex].transform);
    }
}
