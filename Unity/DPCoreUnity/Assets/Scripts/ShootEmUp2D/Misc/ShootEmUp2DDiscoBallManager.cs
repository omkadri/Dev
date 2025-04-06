using UnityEngine;
using System;
using UnityEngine.Rendering.Universal;
using System.Collections;

public class ShootEmUp2DDiscoBallManager : MonoBehaviour
{
    static Action OnDiscoBallHit;

    [SerializeField] float _discoBallPartyTime = 2f;//TODO: find better name
    [SerializeField] float _discoGlobalLightIntensity = 0.2f;
    [SerializeField] Light2D _globalLight;

    float _defaultGlobalLightIntensity;
    Coroutine _discoCoroutine;
    ShootEmUp2DColorSpotlight[] _spotlights;


    void Awake()
    {
        _defaultGlobalLightIntensity = _globalLight.intensity;
    }


        void Start()
    {
        _spotlights = FindObjectsByType<ShootEmUp2DColorSpotlight>( FindObjectsSortMode.None );//TODO: Investigate making this Serialized
    }


    void OnEnable()
    {
        OnDiscoBallHit += DimLights;
    }


    void OnDisable()
    {
        OnDiscoBallHit -= DimLights;
    }


    public void DiscoBallParty()
    {
        if( _discoCoroutine != null )
        {
            return;
        }
        
        OnDiscoBallHit?.Invoke();
    }

    void DimLights()
    {
        foreach (ShootEmUp2DColorSpotlight spotlight in _spotlights)
        {
            StartCoroutine( spotlight.SpotlightDiscoPartyRoutine( _discoBallPartyTime ) );
        }

        _discoCoroutine = StartCoroutine( GlobalLightResetRoutine() );
    }


    IEnumerator GlobalLightResetRoutine()
    {
        _globalLight.intensity = _discoGlobalLightIntensity;
        yield return new WaitForSeconds( _discoBallPartyTime );
        _globalLight.intensity = _defaultGlobalLightIntensity;
        _discoCoroutine = null;
    }
}