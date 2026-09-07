using System.Collections.Generic;
using UnityEngine;

public class DeckUI : MonoBehaviour
{
    [SerializeField] GameObject _cardTabPrefab;

    [SerializeField] List<CardData> _tempDeck;

    List<GameObject> _cardTabs = new List<GameObject>();

    const float VERTICAL_SPACING = 0.8f;

    void Start()
    {
        BuildUI();
    }

    void OnEnable()
    {
        DeckEvents.OnRemoveCardFromDeck += RemoveFromDeck;
    }

    void OnDisable()
    {
        DeckEvents.OnRemoveCardFromDeck -= RemoveFromDeck;
    }

    void RemoveFromDeck(CardData card)
    {
        _tempDeck.Remove(card);
        BuildUI();
    }

    void BuildUI()
    {
        foreach (GameObject cardTab in _cardTabs)
        {
            Destroy(cardTab);
        }

        _cardTabs.Clear(); // this prevents a memory leak

        for (int i = 0; i < _tempDeck.Count; i++)
        {
            GameObject cardTab = Instantiate(_cardTabPrefab, transform);
            cardTab.GetComponent<CardTab>().LoadCardTabData(_tempDeck[i]);
            cardTab.transform.localPosition = new Vector3(0f, -i * VERTICAL_SPACING, 0f);
            _cardTabs.Add(cardTab);
        }
    }
}
