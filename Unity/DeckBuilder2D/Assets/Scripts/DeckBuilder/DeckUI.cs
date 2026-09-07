using System.Collections.Generic;
using UnityEngine;

public class DeckUI : MonoBehaviour
{
    [SerializeField] GameObject _cardTabPrefab;

    List<GameObject> _cardTabs = new List<GameObject>();

    const float VERTICAL_SPACING = 0.65f; //TODO: Serialize?

    void Start()
    {
        BuildUI();
    }

    void OnEnable()
    {
        DeckEvents.OnDeckProcessed += BuildUI;
    }

    void OnDisable()
    {
        DeckEvents.OnDeckProcessed -= BuildUI;
    }

    void BuildUI()
    {
        foreach (GameObject cardTab in _cardTabs)
        {
            Destroy(cardTab);
        }

        _cardTabs.Clear(); // this prevents a memory leak

        List<CardData> deck = DeckManager.Instance.GetDeck();

        for (int i = 0; i < deck.Count; i++)
        {
            GameObject cardTab = Instantiate(_cardTabPrefab, transform);
            cardTab.GetComponent<CardTab>().LoadCardTabData(deck[i]);
            cardTab.transform.localPosition = new Vector3(0f, -i * VERTICAL_SPACING, 0f);
            _cardTabs.Add(cardTab);
        }
    }
}
