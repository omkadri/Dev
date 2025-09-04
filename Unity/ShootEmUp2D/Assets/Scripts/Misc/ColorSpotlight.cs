using System.Collections;
using UnityEngine;

public class ColorSpotlight : MonoBehaviour
{
    [SerializeField] GameObject _spotlightHead;
    [SerializeField] float _rotationSpeed = 20f;
    [SerializeField] float _discoRotationSpeed = 120f;//TODO: find better name
    [SerializeField] float _maxRotation = 45f;
    [SerializeField] bool _randomizeStartingRotation = true;

    float _oscillationTimer;

    void Start()
    {
        if(_randomizeStartingRotation)
        {
            RandomStartingRotation();
        }
    }


    void Update()
    {
        RotateHead();
    }


    public IEnumerator SpotlightDiscoPartyRoutine(float discoPartyTime)
    {
        float defaultRotSpeed = _rotationSpeed;
        _rotationSpeed = _discoRotationSpeed;
        yield return new WaitForSeconds(discoPartyTime);
        _rotationSpeed = defaultRotSpeed;
    }


    void RotateHead()
    {
        _oscillationTimer += Time.deltaTime * _rotationSpeed;
        float zAngle = Mathf.PingPong(_oscillationTimer, _maxRotation);//TODO: understand what Mathf.PingPong does
        _spotlightHead.transform.localRotation = Quaternion.Euler(0f, 0f, zAngle);
    }


    void RandomStartingRotation()
    {
        float randomAngleZ = Random.Range(-_maxRotation, _maxRotation);
        _spotlightHead.transform.localRotation = Quaternion.Euler(0f, 0f, randomAngleZ);
        _oscillationTimer = randomAngleZ + _maxRotation;
    }
}
