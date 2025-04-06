using UnityEngine;

public class ShootEmUp2DParallax : MonoBehaviour
{
    [SerializeField] float _parallaxOffset = 0.9f;

    Vector2 _startPos;
    Camera _mainCamera;

    Vector2 _travel => (Vector2)_mainCamera.transform.position - _startPos; //TODO: understand how expression-bodied properties work
    void Awake()
    {
        _mainCamera = Camera.main;
    }


    void Start()
    {
        _startPos = transform.position;
    }


    void FixedUpdate()
    {
        Vector2 newPos = _startPos + new Vector2( _travel.x * _parallaxOffset, 0f ); //we want to move this in FixedUpdate because our player is moving in FixedUpdate
        transform.position = new Vector2( newPos.x, transform.position.y );
    }
}