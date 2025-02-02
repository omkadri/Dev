using System.Collections;
using UnityEngine;

public class GDTVTopDown2DEnemyAI : MonoBehaviour
{
    [SerializeField] float roamDirectionChangeTime = 2f;
    enum State
    {
        Roaming
    }

    State state;
    GDTVTopDown2DEnemyPathfinder enemyPathfinding;


    void Awake()
    {
        enemyPathfinding = GetComponent<GDTVTopDown2DEnemyPathfinder>();
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
            Vector2 roamPos = GetRoamingPos();
            enemyPathfinding.MoveTo( roamPos );
            yield return new WaitForSeconds( roamDirectionChangeTime );
        }
    }


    Vector2 GetRoamingPos()
    {
        return new Vector2( Random.Range( -1f, 1f ), Random.Range( -1f, 1f ) ).normalized;
    }
}