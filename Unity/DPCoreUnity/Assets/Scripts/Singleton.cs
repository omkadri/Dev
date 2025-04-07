using UnityEngine;

public class Singleton<T> : MonoBehaviour where T : Singleton<T>
{
    private static T instance;
    public static T Instance => instance;

    [Tooltip("Only persist this singleton if it has no parent (recommended for root managers).")]
    [SerializeField] private bool requireNoParentToPersist = true;

    protected virtual void Awake()
    {
        if ( instance != null && instance != this )
        {
            //Debug.LogWarningFormat("[Singleton] Duplicate instance of {0} found on {1}. Destroying this instance.", typeof(T).Name, gameObject.name);
            Destroy(gameObject);
            return;
        }

        instance = (T)this;

        if ( !requireNoParentToPersist || transform.parent == null )
        {
            DontDestroyOnLoad( gameObject );
        }
    }

    protected virtual void OnDestroy()
    {
        if ( instance == this )
        {
            instance = null;
        }
    }
}