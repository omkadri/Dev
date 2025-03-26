using UnityEngine;

public class LaserDefender2DBackgroundScrolling : MonoBehaviour
{
    [SerializeField] Vector2 _moveSpeed;

    Vector2 offset;
    Material material;


    void Awake()
    {
        material = GetComponent<SpriteRenderer>().material;
    }


    void Update()
    {
        offset = _moveSpeed * Time.deltaTime;
        material.mainTextureOffset += offset;
    }
}