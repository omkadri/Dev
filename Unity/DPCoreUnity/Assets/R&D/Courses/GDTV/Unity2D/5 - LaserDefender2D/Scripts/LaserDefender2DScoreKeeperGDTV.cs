using Unity.Mathematics;
using UnityEngine;

public class LaserDefender2DScoreKeeperGDTV : MonoBehaviour
{
    private int currentScore;

    public int GetCurrentScore()
    {
        return currentScore;
    }

    public void ModifyScore( int value )
    {
        currentScore += value;
        Mathf.Clamp( currentScore, 0, int.MaxValue );
        Debug.Log( currentScore );
    }

    public void ResetScore()
    {
        currentScore = 0;
    }
}
