using UnityEngine;

public class Ball : MonoBehaviour
{
    //config parameters
    [SerializeField] Paddle paddle1;
    [SerializeField] float xPush = 2f;
    [SerializeField] float yPush = 15f;
    [SerializeField] AudioClip[] ballSounds; // 5 //
    [SerializeField] float randomFactor = 0.2f;

    //state
    Vector2 paddleToBallVector;
    bool hasStarted = false;

    //cached component references
    AudioSource myAudioSource; // 4 //
    Rigidbody2D myRigidBody2D;

    void Start()
    {
        paddleToBallVector = transform.position - paddle1.transform.position; // 1 //
        myAudioSource = GetComponent<AudioSource>(); // 4 //
        myRigidBody2D = GetComponent<Rigidbody2D>();
    }
    void Update()
    {
        if (!hasStarted)
        {
            LockBallToPaddle();
            LaunchOnMouseClick();
        }
    }
    private void LaunchOnMouseClick()
    {
        if (Input.GetMouseButtonDown(0))
        {
            hasStarted = true;
            myRigidBody2D.velocity = new Vector2(xPush, yPush);
        }
    }
    private void LockBallToPaddle()
    {
        Vector2 paddlePos = new Vector2(paddle1.transform.position.x, paddle1.transform.position.y);
        transform.position = paddlePos + paddleToBallVector;
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Vector2 velocityTweak = new Vector2 // one line of code can exist as more than one space 
            (Random.Range(0f,randomFactor), // so long as the syntax is correctly ordered
            Random.Range(0f, randomFactor)); //** Random is a common function with different namespaces. 
                                             // if multiple namespaces with Random are being used, it will result in an error. 

        if (hasStarted)
        {
            AudioClip clip = ballSounds[UnityEngine.Random.Range(0, ballSounds.Length)]; // 3 //
            myAudioSource.PlayOneShot(clip);  // 4 //
            myRigidBody2D.velocity += velocityTweak; // implements the randomness to the 
        }
    }
}


// 1    coordinates of the ball minus the coordinates of the paddle.

/* 2    we use PlayOneShot because we want the sound to play in it's entirety. 
        Only using Play will have the sound be iterupted if another sound is played */

// 3    PlayOneShot (on the next line) requires a variable to call from, so we declared "clip". We also made its value a random range.

/* 4    We use the custom myAudioSource instead of GetComponent because it caches the audio files 
       (as opposed to grabbing them everytime)
       THIS IS INCREDIBALLY USEFUL FOR NPC DIALOGUE*/

// 5    This creates serialized field in the inspector that we can attach sound files to...