using UnityEngine;

public class ShootEmUp2DColorSpotlight : MonoBehaviour
{
    [SerializeField] GameObject _spotlightHead;
    [SerializeField] float _rotationSpeed = 20f;
    [SerializeField] float _maxRotation = 45f;
    [SerializeField] bool _randomizeStartingRotation = true;

    float _oscillationTimer;

    void Start()
    {
        if( _randomizeStartingRotation )
        {
            RandomStartingRotation();
        }
    }


    void Update()
    {
        RotateHead();
    }


    void RotateHead()
    {
        _oscillationTimer += Time.deltaTime * _rotationSpeed;
        float zAngle = Mathf.PingPong( _oscillationTimer, _maxRotation );//TODO: understand what Mathf.PingPong does
        _spotlightHead.transform.localRotation = Quaternion.Euler( 0f, 0f, zAngle );
    }


    void RandomStartingRotation()
    {
        float randomAngleZ = Random.Range( -_maxRotation, _maxRotation );
        _spotlightHead.transform.localRotation = Quaternion.Euler( 0f, 0f, randomAngleZ );
        _oscillationTimer = randomAngleZ + _maxRotation;
    }
}
