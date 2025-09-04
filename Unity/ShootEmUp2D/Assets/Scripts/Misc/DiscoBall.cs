using UnityEngine;

public class DiscoBall : MonoBehaviour, IHitable
{
    DamageFlash _flash;
    DiscoBallManager _discoBallManager;

    void Awake()
    {
        _flash = GetComponent<DamageFlash>();
        _discoBallManager = FindFirstObjectByType<DiscoBallManager>();
    }


    public void TakeHit()
    {
        _discoBallManager.DiscoBallParty();
        _flash.StartFlash();
    }
}