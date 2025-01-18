using System.Collections;
using UnityEngine;

public class GDTVTopDownAction2DDamageFlash : MonoBehaviour
{
    [SerializeField] Material damageFlashMat;
    [SerializeField] float restoreDefaultMatTime = 0.2f;

    Material defaultMat;
    SpriteRenderer spriteRenderer;


    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        defaultMat = spriteRenderer.material;
    }


    public float GetRestoreMatTime()
    {
        return restoreDefaultMatTime;
    }


    public IEnumerator DamageFlashRoutine()
    {
        spriteRenderer.material = damageFlashMat;
        yield return new WaitForSeconds( restoreDefaultMatTime );
        spriteRenderer.material = defaultMat;
    }
}
