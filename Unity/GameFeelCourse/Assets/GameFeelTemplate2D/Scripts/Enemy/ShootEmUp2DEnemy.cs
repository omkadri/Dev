using System.Collections;
using UnityEngine;

public class ShootEmUp2DEnemy : MonoBehaviour
{
    [SerializeField] float jumpForce = 7f;
    [SerializeField] float jumpInterval = 4f;
    [SerializeField] float changeDirInterval = 3f;

    Rigidbody2D rb2d;
    ShootEmUp2DMovement movement;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        movement = GetComponent<ShootEmUp2DMovement>();
    }


    void Start() 
    {
        StartCoroutine(ChangeDirectionRoutine());
        StartCoroutine(RandomJumpRoutine());
    }


    IEnumerator ChangeDirectionRoutine()
    {
        while (true)
        {
            float currentDir = UnityEngine.Random.Range(0, 2) * 2 - 1; // 1 or -1
            movement.SetCurrentDirection( currentDir );
            yield return new WaitForSeconds(changeDirInterval);
        }
    }


    IEnumerator RandomJumpRoutine() 
    {
        while (true)
        {
            yield return new WaitForSeconds(jumpInterval);
            float randomDir = Random.Range(-1, 1);
            Vector2 jumpDir = new Vector2(randomDir, 1f).normalized;
            rb2d.AddForce(jumpDir * jumpForce, ForceMode2D.Impulse);
        }
    }
}