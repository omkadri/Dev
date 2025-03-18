using System.Collections;
using UnityEngine;

public class GameFeelTemplate2DEnemy : MonoBehaviour
{
    [SerializeField] float moveSpeed = 3f;
    [SerializeField] float jumpForce = 7f;
    [SerializeField] float jumpInterval = 4f;
    [SerializeField] float changeDirInterval = 3f;

    int currentDir;

    Rigidbody2D rb2d;


    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
    }


    void Start() 
    {
        StartCoroutine(ChangeDirectionRoutine());
        StartCoroutine(RandomJumpRoutine());
    }


    void FixedUpdate()
    {
        Move();
    }


    void Move()
    {
        Vector2 newVelocity = new(currentDir * moveSpeed, rb2d.linearVelocity.y);
        rb2d.linearVelocity = newVelocity;
    }


    IEnumerator ChangeDirectionRoutine()
    {
        while (true)
        {
            currentDir = UnityEngine.Random.Range(0, 2) * 2 - 1; // 1 or -1
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