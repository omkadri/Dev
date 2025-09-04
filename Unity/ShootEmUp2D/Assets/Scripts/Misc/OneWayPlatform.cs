using System.Collections;
using UnityEngine;

public class OneWayPlatform : MonoBehaviour
{
    [SerializeField] float _disableColliderTime = 1f;

    bool _playerOnPlatform = false;
    Collider2D _platformCollider;


    void Awake()
    {
        _platformCollider = GetComponent<BoxCollider2D>();       
    }


    void Update()
    {
        DetectPlayerInput();
    }


    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.GetComponent<PlayerController>())
        {
            _playerOnPlatform = true;
        }
    }


    void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.GetComponent<PlayerController>())
        {
            _playerOnPlatform = false;
        } 
    }


    void DetectPlayerInput()
    {
        if (!_playerOnPlatform)
        {
            return;
        }

        if (PlayerController.Instance.MoveInput.y < 0f) //TODO: Add a check for if jum button is pressed as well
        {
            StartCoroutine(DisablePlatformColliderRoutine());
        }
    }


    IEnumerator DisablePlatformColliderRoutine()
    {
        Collider2D[] playerColliders = PlayerController.Instance.GetComponents<Collider2D>(); //this is an array because the player has more than one collider

        foreach (Collider2D playerCollider in playerColliders)
        {
            Physics2D.IgnoreCollision(playerCollider, _platformCollider, true);// This does not disable physics, but rather disables collision.
        }

        yield return new WaitForSeconds(_disableColliderTime);

        foreach (Collider2D playerCollider in playerColliders)
        {
            Physics2D.IgnoreCollision(playerCollider, _platformCollider, false);
        }
    }
}
