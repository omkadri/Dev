using System.Collections.Generic;
using UnityEngine;

public class Chunk : MonoBehaviour
{
    [SerializeField] GameObject _fencePrefab;
    [SerializeField] GameObject _speedPickupPrefab;
    [SerializeField] GameObject _pointPickupPrefab;

    [SerializeField] float _speedPickupSpawnChance = .12f;
    [SerializeField] float _pointPickupSpawnChance = .5f;
    [SerializeField] float _pointPickupSeperationLength = 2f;

    [SerializeField] float[] _lanes = { -3f, 0f, 3f };

    LevelGenerator _levelGenerator;
    ScoreManager _scoreManager;

    List<int> _availableLanes = new List<int> { 0, 1, 2 };

    void Start() 
    {
        SpawnFences();
        SpawnApple();
        SpawnCoins();
    }

    public void Init(LevelGenerator levelGenerator, ScoreManager scoreManager) 
    {
        this._levelGenerator = levelGenerator;
        this._scoreManager = scoreManager;
    }

    void SpawnFences() 
    {
        int fencesToSpawn = Random.Range(0, _lanes.Length);

        for (int i = 0; i < fencesToSpawn; i++)
        {
            if (_availableLanes.Count <= 0) break;

            int selectedLane = SelectLane();

            Vector3 spawnPosition = new Vector3(_lanes[selectedLane], transform.position.y, transform.position.z);
            Instantiate(_fencePrefab, spawnPosition, Quaternion.identity, this.transform);
        }
    }

    void SpawnApple() 
    {
        if (Random.value > _speedPickupSpawnChance || _availableLanes.Count <= 0 ) return;

        int selectedLane = SelectLane();

        Vector3 spawnPosition = new Vector3(_lanes[selectedLane], transform.position.y, transform.position.z);
        SpeedPickup newApple = Instantiate(_speedPickupPrefab, spawnPosition, Quaternion.identity, this.transform).GetComponent<SpeedPickup>();
        newApple.Init(_levelGenerator);
    }

    void SpawnCoins()
    {
        if (Random.value > _pointPickupSpawnChance || _availableLanes.Count <= 0) return;

        int selectedLane = SelectLane();

        int maxCoinsToSpawn = 6;
        int coinsToSpawn = Random.Range(1, maxCoinsToSpawn);

        float topOfChunkZPos = transform.position.z + (_pointPickupSeperationLength * 2f);

        for (int i = 0; i < coinsToSpawn; i++)
        {
            float spawnPositionZ = topOfChunkZPos - (i * _pointPickupSeperationLength);
            Vector3 spawnPosition = new Vector3(_lanes[selectedLane], transform.position.y, spawnPositionZ);
            PointPickup newCoin = Instantiate(_pointPickupPrefab, spawnPosition, Quaternion.identity, this.transform).GetComponent<PointPickup>();
            newCoin.Init(_scoreManager);
        }

    }

    int SelectLane()
    {
        int randomLaneIndex = Random.Range(0, _availableLanes.Count);
        int selectedLane = _availableLanes[randomLaneIndex];
        _availableLanes.RemoveAt(randomLaneIndex);
        return selectedLane;
    }
}
