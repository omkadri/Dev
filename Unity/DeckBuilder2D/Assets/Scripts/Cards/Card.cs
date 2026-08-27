using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
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
    Vector3 _originalPosition;

    SortingGroup _sortingGroup;
    int _originalSortingOrder;

    static bool _isBeingDragged = false; //static prevents inactive cards from expanding on hover during drag

    CardData _cardData;
    Collider2D _cardCollider;

    void Awake()
    {
        _sortingGroup = GetComponent<SortingGroup>();
        _cardCollider = GetComponent<Collider2D>();
    }

    void Start()
    {
        _originalScale = transform.localScale;
        _originalPosition = transform.localPosition;
        _originalSortingOrder = _sortingGroup.sortingOrder;
    }

    void OnMouseEnter() //TODO: Support New Input System only (not Both)
    {
        if (_isBeingDragged)
        {
            return;
        }

        transform.localScale = _originalScale * _hoverScale;
        transform.localPosition += new Vector3(0, _hoverOffest, 0f);
        _sortingGroup.sortingOrder += 1;
    }

    void OnMouseExit() //TODO: Support New Input System only (not Both)
    {
        if (_isBeingDragged)
        {
            return;
        }

        transform.localScale = _originalScale;
        transform.localPosition = _originalPosition;
        _sortingGroup.sortingOrder = _originalSortingOrder;
    }

    void OnMouseDrag()
    {
        _isBeingDragged = true;
        gameObject.transform.position = GetMousePosistion();
    }

    Vector3 GetMousePosistion()//TODO: Abstract into Utils class???
    {
        Vector3 mousePosition = Mouse.current.position.ReadValue();
        mousePosition.z = transform.position.z - Camera.main.transform.position.z;//Prevents cared from being clipped outside of camera
        return Camera.main.ScreenToWorldPoint(mousePosition);
    }

    void OnMouseUp()
    {
        _isBeingDragged = false;
        transform.localScale = _originalScale;
        transform.localPosition = _originalPosition;
        _sortingGroup.sortingOrder = _originalSortingOrder;
    }

    void OnDestroy()
    {
        _isBeingDragged = false;
    }

    public CardData GetCardData() => _cardData;
    
    public void LoadCardData(CardData cardData)
    {
        _cardData = cardData;
        _cardNameText.text = cardData.CardName;
        _actionCostText.text = cardData.ActionCost.ToString();
        _illustrationRenderer.sprite = cardData.Illustration;
        _descriptionText.text = cardData.Description;
    }
    
    public void SetInteractable(bool interactable)
    {
        _cardCollider.enabled = interactable;
    }
}