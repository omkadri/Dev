using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// Mostly stole this from the top down RPG course. Thanks Stephan.
public class Flash : MonoBehaviour
{
    [SerializeField] private Color _flashColor = Color.red;
    [SerializeField] private float _flashDuration = .2f;

    private Color _defaultColor;
    private SpriteRenderer _spriteRenderer;

    private void Awake() {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _defaultColor = _spriteRenderer.color;
    }

    public IEnumerator FlashRoutine()
    {
        _spriteRenderer.color = _flashColor;
        yield return new WaitForSeconds(_flashDuration);
        _spriteRenderer.color = _defaultColor;
    }
}
