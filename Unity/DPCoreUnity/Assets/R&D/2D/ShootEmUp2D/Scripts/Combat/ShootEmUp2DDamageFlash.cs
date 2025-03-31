using System.Collections;
using UnityEngine;

public class ShootEmUp2DDamageFlash : MonoBehaviour
{
    [SerializeField] Material _defaultMat;
    [SerializeField] Material _damageFlashMat;
    [SerializeField] float _flashTime = 0.1f;

    SpriteRenderer[] _spriteRenderers;//plural because enemies have 2 sprite renderers
    ShootEmUp2DColorChanger _colorChanger;


    void Awake()
    {
        _spriteRenderers = GetComponentsInChildren<SpriteRenderer>();   
        _colorChanger = GetComponent<ShootEmUp2DColorChanger>();   
    }


    public void StartFlash()
    {
        StartCoroutine( FlashRoutine() );
    }


    IEnumerator FlashRoutine()
    {
        foreach ( SpriteRenderer sr in _spriteRenderers )
        {
            sr.material = _damageFlashMat;

            if ( _colorChanger )
            {
                _colorChanger.SetColor( Color.white );
            }
        }

        yield return new WaitForSeconds( _flashTime );
        SetDefaultMaterial();
    }


    void SetDefaultMaterial()
    {
        foreach ( SpriteRenderer sr in _spriteRenderers )
        {
            sr.material = _defaultMat;
            if ( _colorChanger )
            {
                _colorChanger.SetColor( _colorChanger.DefaultColor );
            }
        }
    }
}