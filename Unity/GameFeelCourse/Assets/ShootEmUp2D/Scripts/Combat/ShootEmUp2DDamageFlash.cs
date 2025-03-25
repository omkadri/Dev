using System.Collections;
using UnityEngine;

public class ShootEmUp2DDamageFlash : MonoBehaviour
{
    [SerializeField] Material defaultMat;
    [SerializeField] Material damageFlashMat;
    [SerializeField] float flashTime = 0.1f;

    SpriteRenderer[] spriteRenderers;//plural because enemies have 2 sprite renderers
    ShootEmUp2DColorChanger colorChanger;


    void Awake()
    {
        spriteRenderers = GetComponentsInChildren<SpriteRenderer>();   
        colorChanger = GetComponent<ShootEmUp2DColorChanger>();   
    }


    public void StartFlash()
    {
        StartCoroutine( FlashRoutine() );
    }


    IEnumerator FlashRoutine()
    {
        foreach ( SpriteRenderer sr in spriteRenderers )
        {
            sr.material = damageFlashMat;

            if ( colorChanger )
            {
                colorChanger.SetColor( Color.white );
            }
        }

        yield return new WaitForSeconds( flashTime );
        SetDefaultMaterial();
    }


    void SetDefaultMaterial()
    {
        foreach ( SpriteRenderer sr in spriteRenderers )
        {
            sr.material = defaultMat;
            if ( colorChanger )
            {
                colorChanger.SetColor( colorChanger.DefaultColor );
            }
        }
    }
}