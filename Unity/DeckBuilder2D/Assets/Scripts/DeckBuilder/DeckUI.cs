using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;


public class DeckUI : MonoBehaviour
{
    [SerializeField] GameObject _cardTabPrefab;

    [SerializeField] List<CardData> _tempDeck;

    const float VERTICAL_SPACING = 0.8f;

    void Start()
    {
        BuildUI();
    }

    void BuildUI()
    {
        for (int i = 0; i < _tempDeck.Count; i++)
        {
            GameObject cardTab = Instantiate(_cardTabPrefab, transform);
            cardTab.GetComponent<CardTab>().LoadCardTabData(_tempDeck[i]);
            cardTab.transform.localPosition = new Vector3(0f, -i * VERTICAL_SPACING, 0f);
        }
    }
}
