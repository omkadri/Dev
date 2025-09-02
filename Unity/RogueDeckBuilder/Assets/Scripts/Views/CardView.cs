using TMPro;
using UnityEngine;

public class CardView : MonoBehaviour
{
    [SerializeField] TMP_Text _title;
    [SerializeField] TMP_Text _description;
    [SerializeField] TMP_Text _mana;
    [SerializeField] SpriteRenderer _imageSpriteRenderer;
    [SerializeField] GameObject _wrapper;

    public Card Card { get; private set; }

    public void Setup(Card card)
    {
        Card = card;
        _title.text = card.Title;
        _description.text = card.Description;
        _mana.text = card.Mana.ToString();
        _imageSpriteRenderer.sprite = card.Image;
    }

    void OnMouseEnter()
    {
        _wrapper.SetActive(false);
        Vector3 pos = new(transform.position.x, -2, 0);
        CardViewHoverSystem.Instance.Show(Card, pos);
    }

    void OnMouseExit()
    {
        CardViewHoverSystem.Instance.Hide();
        _wrapper.SetActive(true);
    }
}
