using UnityEngine;

public class ShootEmUp2DDiscoBall : MonoBehaviour, IHitable
{
    ShootEmUp2DDamageFlash _flash;

    void Awake()
    {
        _flash = GetComponent<ShootEmUp2DDamageFlash>();
    }


    public void TakeHit()
    {
        _flash.StartFlash();
    }
}