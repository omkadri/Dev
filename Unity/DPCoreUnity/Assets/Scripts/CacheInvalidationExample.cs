using UnityEngine;

public class CacheInvalidationExample : MonoBehaviour
{
    int score;
    bool isCacheValid = false;
    string cachedScoreText;

    public string GetScoreText()
    {
        if ( !isCacheValid )
        {
            cachedScoreText = "Score: " + score;
            isCacheValid = true;
        }
        return cachedScoreText;
    }

    public void SetScore(int newScore)
    {
        score = newScore;
        InvalidateCache();
    }

    void InvalidateCache()
    {
        isCacheValid = false;
    }

    void Start()
    {
        SetScore( 100 );
        Debug.Log( GetScoreText() );
    }
}