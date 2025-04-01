using System.Collections;
using UnityEngine;
using UnityEngine.Tilemaps;

public class TopDown2DTransparencyDetection : MonoBehaviour
{
    [Range( 0, 1 )]
    [SerializeField] float _transparencyAmount = 0.8f;
    [SerializeField] float _fadeTime = 0.4f;

    SpriteRenderer _spriteRenderer;
    Tilemap _tilemap;


    void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _tilemap = GetComponent<Tilemap>();
    }


    void OnTriggerEnter2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<TopDown2DPlayerController>() )
        {
            if ( _spriteRenderer )
            {
                StartCoroutine( FadeSpriteRoutine( _spriteRenderer, _fadeTime, _spriteRenderer.color.a, _transparencyAmount ) );
            }
            else if ( _tilemap )
            {
                StartCoroutine( FadeTilemapRoutine( _tilemap, _fadeTime, _tilemap.color.a, _transparencyAmount ) );
            }
        }
    }


    void OnTriggerExit2D( Collider2D other )
    {
        if ( other.gameObject.GetComponent<TopDown2DPlayerController>() )
        {
            if ( _spriteRenderer )
            {
                StartCoroutine( FadeSpriteRoutine( _spriteRenderer, _fadeTime, _spriteRenderer.color.a, 1f ) );
            }
            else if ( _tilemap )
            {
                StartCoroutine( FadeTilemapRoutine( _tilemap, _fadeTime, _tilemap.color.a, 1f ) );
            }
        }
    }


    IEnumerator FadeSpriteRoutine( SpriteRenderer spriteRenderer, float fadeTime, float startValue, float targetTransparency )
    {
        float elapsedTime = 0;
        while( elapsedTime <fadeTime )
        {
            elapsedTime += Time.deltaTime;
            float newAlpha = Mathf.Lerp( startValue, targetTransparency, elapsedTime / fadeTime );
            spriteRenderer.color = new Color( spriteRenderer.color.r, spriteRenderer.color.g, spriteRenderer.color.b, newAlpha );
            yield return null;
        }
    }


    IEnumerator FadeTilemapRoutine( Tilemap tilemap, float fadeTime, float startValue, float targetTransparency )
    {
        float elapsedTime = 0;
        while( elapsedTime <fadeTime )
        {
            elapsedTime += Time.deltaTime;
            float newAlpha = Mathf.Lerp( startValue, targetTransparency, elapsedTime / fadeTime );
            tilemap.color = new Color( tilemap.color.r, tilemap.color.g, tilemap.color.b, newAlpha );
            yield return null;
        }
    }
}