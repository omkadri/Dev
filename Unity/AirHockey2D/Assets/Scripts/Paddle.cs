using UnityEngine;
using System.Collections;

public class PaddleController : MonoBehaviour
{
    [Header("Movement Settings")]
    public float speed = 10f;
    public bool isPlayer1 = true;

    [Header("Nudge Settings")]
    public float nudgeForce = 12f;       // How strong the forward push is
    public float returnForce = 8f;       // How strong the return pull is
    public float nudgeDuration = 0.1f;   // Time between forward and back
    public float nudgeCooldown = 0.5f;   // Delay before next nudge

    private bool isNudging = false;
    private float lastNudgeTime;
    private Rigidbody2D rb;

    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        MovePaddle();
        HandleNudge();
    }

    void MovePaddle()
    {
        if (isNudging) return; // Stop normal movement during a nudge

        float moveX = 0f;
        float moveY = 0f;

        if (isPlayer1)
        {
            if (Input.GetKey(KeyCode.W)) moveY = 1f;
            if (Input.GetKey(KeyCode.S)) moveY = -1f;
            if (Input.GetKey(KeyCode.A)) moveX = -1f;
            if (Input.GetKey(KeyCode.D)) moveX = 1f;
        }
        else
        {
            if (Input.GetKey(KeyCode.UpArrow)) moveY = 1f;
            if (Input.GetKey(KeyCode.DownArrow)) moveY = -1f;
            if (Input.GetKey(KeyCode.LeftArrow)) moveX = -1f;
            if (Input.GetKey(KeyCode.RightArrow)) moveX = 1f;
        }

        Vector2 moveDir = new Vector2(moveX, moveY).normalized;
        rb.linearVelocity = moveDir * speed;
    }

    void HandleNudge()
    {
        KeyCode nudgeKey = isPlayer1 ? KeyCode.Space : KeyCode.RightControl;

        if (Input.GetKeyDown(nudgeKey) && !isNudging && Time.time >= lastNudgeTime + nudgeCooldown)
        {
            StartCoroutine(NudgeRoutine());
        }
    }

    IEnumerator NudgeRoutine()
    {
        isNudging = true;
        lastNudgeTime = Time.time;

        // Stop normal movement briefly
        rb.linearVelocity = Vector2.zero;

        // Forward push
        rb.AddForce(transform.up * nudgeForce, ForceMode2D.Impulse);

        yield return new WaitForSeconds(nudgeDuration);

        // Pull back slightly
        rb.AddForce(-transform.up * returnForce, ForceMode2D.Impulse);

        yield return new WaitForSeconds(0.1f);

        isNudging = false;
    }
}