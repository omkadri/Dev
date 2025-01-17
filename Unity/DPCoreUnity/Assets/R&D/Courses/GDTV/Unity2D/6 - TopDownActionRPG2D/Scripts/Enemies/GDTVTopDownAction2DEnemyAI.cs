using System.Collections;
using UnityEngine;

public class GDTVTopDownAction2DEnemyAI : MonoBehaviour
{
    enum State
    {
        Roaming
    }

    State state;
    GDTVTopDownAction2DEnemyPathfinder enemyPathfinding;

    void Awake()
    {
        enemyPathfinding = GetComponent<GDTVTopDownAction2DEnemyPathfinder>();
        state = State.Roaming;
    }

    void Start()
    {
        StartCoroutine( RoamingRoutine() );
    }

    IEnumerator RoamingRoutine()
    {
        while( state == State.Roaming )
        {
            Vector2 roamPosition = GetRoamingPosition();
            enemyPathfinding.MoveTo( roamPosition );
            yield return new WaitForSeconds( 2f );
        }
    }

    Vector2 GetRoamingPosition()
    {
        return new Vector2( Random.Range( -1f, 1f ), Random.Range( -1f, 1f ) ).normalized;
    }
}
