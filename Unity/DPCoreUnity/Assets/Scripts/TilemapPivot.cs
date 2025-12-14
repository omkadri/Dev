using UnityEngine;
using UnityEngine.Tilemaps;

public class TilemapPivot : MonoBehaviour
{
    TilemapRenderer tilemapRenderer;

    [SerializeField] Transform pivot; 

    void Start()
    {
        tilemapRenderer = GetComponent<TilemapRenderer>();
    }

    void Update()
    {
        if (transform.position.y > pivot.position.y)
        {
            tilemapRenderer.sortingOrder = -1;
        }
        else
        {
            tilemapRenderer.sortingOrder = 1;
        }
    }
}
