using TMPro;
using UnityEngine;
using UnityEngine.Rendering;

public class Card : MonoBehaviour
{
    [SerializeField] TextMeshPro _cardNameText;

    [SerializeField] TextMeshPro _actionCostText;

    [SerializeField] SpriteRenderer _illustrationRenderer;

    [SerializeField] TextMeshPro _descriptionText;


    [SerializeField] float _hoverScale = 2f;

    [SerializeField] float _hoverOffest = 2f;

    Vector3 _originalScale;
    Vector3 _originalPos;
    SortingGroup _sortingGroup;
    int _originalSortingOrder;

    void Awake()
    {
        _sortingGroup = GetComponent<SortingGroup>();
    }

    void Start()
    {
        _originalScale = transform.localScale;
        _originalPos = transform.localPosition;
        _originalSortingOrder = _sortingGroup.sortingOrder;
    }

    public void LoadCardData(CardData cardData)
    {
        _cardNameText.text = cardData.CardName;
        _actionCostText.text = cardData.ActionCost.ToString();
        _illustrationRenderer.sprite = cardData.Illustration;
        _descriptionText.text = cardData.Description;
    }

    void OnMouseEnter() //TODO: Support New Input System only (not Both)
    {
        transform.localScale = _originalScale * _hoverScale;
        transform.localPosition += new Vector3(0, _hoverOffest, 0f);
        _sortingGroup.sortingOrder += 1;
    }

    void OnMouseExit() //TODO: Support New Input System only (not Both)
    {
        transform.localScale = _originalScale;
        transform.localPosition = _originalPos;
        _sortingGroup.sortingOrder = _originalSortingOrder;
    }
}