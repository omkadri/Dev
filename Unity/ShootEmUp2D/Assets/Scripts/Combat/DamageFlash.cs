using System.Collections;
using UnityEngine;

public class DamageFlash : MonoBehaviour
{
    [SerializeField] Material _defaultMat;
    [SerializeField] Material _damageFlashMat;
    [SerializeField] float _flashTime = 0.1f;

    SpriteRenderer[] _spriteRenderers;//plural because enemies have 2 sprite renderers
    ColorChanger _colorChanger;


    void Awake()
    {
        _spriteRenderers = GetComponentsInChildren<SpriteRenderer>();   
        _colorChanger = GetComponent<ColorChanger>();   
    }


    public void StartFlash()
    {
        StartCoroutine(FlashRoutine());
    }


    IEnumerator FlashRoutine()
    {
        foreach (SpriteRenderer sr in _spriteRenderers)
        {
            sr.material = new Material(_damageFlashMat); 
            /*HACK: setting sr.material to _damageFlashMat directly results in issue where the child sprites briefly inherit the 
            texture of the parent. It could be related to Sprites-Lit-Default being a shared material. This solution is not optimal 
            because it causes memory leaks, but for now, it is the best known solution...*/

            if (_colorChanger)
            {
                _colorChanger.SetColor(Color.white);
            }
        }

        yield return new WaitForSeconds(_flashTime);
        SetDefaultMaterial();
    }


    void SetDefaultMaterial()
    {
        foreach (SpriteRenderer sr in _spriteRenderers)
        {
            sr.material = _defaultMat;
            if (_colorChanger)
            {
                _colorChanger.SetColor(_colorChanger.DefaultColor);
            }
        }
    }
}