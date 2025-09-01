using UnityEngine;

public class ShootEmUp2DDiscoBall : MonoBehaviour, IHitable
{
    ShootEmUp2DDamageFlash _flash;
    ShootEmUp2DDiscoBallManager _discoBallManager;

    void Awake()
    {
        _flash = GetComponent<ShootEmUp2DDamageFlash>();
        _discoBallManager = FindFirstObjectByType<ShootEmUp2DDiscoBallManager>();
    }


    public void TakeHit()
    {
        _discoBallManager.DiscoBallParty();
        _flash.StartFlash();
    }
}