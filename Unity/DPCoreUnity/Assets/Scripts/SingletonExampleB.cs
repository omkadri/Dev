using UnityEngine;

public class SingletonExampleB : MonoBehaviour
{
    static SingletonExampleB instance;

    void Awake()
    {
        ManageSingleton();
    }

    void ManageSingleton()
    {
        if( instance != null )
        {
            gameObject.SetActive( false );
            Destroy( gameObject );
        }
        else
        {
            instance = this;
            DontDestroyOnLoad( gameObject ) ;
        }
    }
}
