using UnityEngine;

public class LaneDefense2DLevelController : MonoBehaviour
{
    int _numberOfAttackers = 0;
    bool _levelTimerFinished = false;

    public void AttackerSpawned()
    {
        _numberOfAttackers++;
    }


    public void AttackerKilled()
    {
        _numberOfAttackers--;
        if (_numberOfAttackers <= 0 && _levelTimerFinished)
        {
            Debug.Log("End Level Now!");
        }
    }


    public void LevelTimerFinished()
    {
        _levelTimerFinished = true;
        StopSpawners();
    }


    void StopSpawners()
    {
        LaneDefense2DAttackerSpawner[] spawnerArray = FindObjectsByType<LaneDefense2DAttackerSpawner>(FindObjectsSortMode.None);
        foreach (LaneDefense2DAttackerSpawner spawner in spawnerArray)
        {
            spawner.StopSpawning();
        }
    }
}