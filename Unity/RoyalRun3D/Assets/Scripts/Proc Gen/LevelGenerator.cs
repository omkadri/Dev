using System.Collections.Generic;
using UnityEngine;

public class LevelGenerator : MonoBehaviour
{
    [Header("References")]
    [SerializeField] CameraController _cameraController;
    [SerializeField] GameObject[] _chunkPrefabs;
    [SerializeField] GameObject _checkpointChunkPrefab;
    [SerializeField] Transform _chunkParent;
    [SerializeField] ScoreManager _scoreManager;

    [Header("Level Settings")]
    [Tooltip("The amount of chunks we start with")]
    [SerializeField] int _startingChunksAmount = 12;
    [SerializeField] int _checkpointChunkInterval = 8;
    [Tooltip("Do not change chunk length value unless chunk prefab size reflects change")]
    [SerializeField] float _chunkLength = 10f;
    [SerializeField] float _moveSpeed = 8f;
    [SerializeField] float _minMoveSpeed = 2f;
    [SerializeField] float _maxMoveSpeed = 20f;
    [SerializeField] float _minGravityZ = -22f;
    [SerializeField] float _maxGravityZ = -2f;

    List<GameObject> _chunks = new List<GameObject>();
    int _chunksSpawned = 0;

    void Start()
    {
        SpawnStartingChunks();
    }

    void Update() 
    {
        MoveChunks();
    }

    public void ChangeChunkMoveSpeed(float speedAmount)
    {
        float newMoveSpeed = _moveSpeed + speedAmount;
        newMoveSpeed = Mathf.Clamp(newMoveSpeed, _minMoveSpeed, _maxMoveSpeed);

        if (newMoveSpeed != _moveSpeed) 
        {
            _moveSpeed = newMoveSpeed;

            float newGravityZ = Physics.gravity.z - speedAmount;
            newGravityZ = Mathf.Clamp(newGravityZ, _minGravityZ, _maxGravityZ);
            Physics.gravity = new Vector3(Physics.gravity.x, Physics.gravity.y, newGravityZ);
            
            _cameraController.ChangeCameraFOV(speedAmount);
        }
    }

    void SpawnStartingChunks()
    {
        for (int i = 0; i < _startingChunksAmount; i++)
        {
            SpawnChunk();
        }
    }

    private void SpawnChunk()
    {
        float spawnPositionZ = CalculateSpawnPositionZ();
        Vector3 chunkSpawnPos = new Vector3(transform.position.x, transform.position.y, spawnPositionZ);
        GameObject chunkToSpawn = ChooseChunkToSpawn();
        GameObject newChunkGO = Instantiate(chunkToSpawn, chunkSpawnPos, Quaternion.identity, _chunkParent);
        _chunks.Add(newChunkGO);
        Chunk newChunk = newChunkGO.GetComponent<Chunk>();
        newChunk.Init(this, _scoreManager);

        _chunksSpawned++;
    }

    private GameObject ChooseChunkToSpawn()
    {
        GameObject chunkToSpawn;

        if (_chunksSpawned % _checkpointChunkInterval == 0 && _chunksSpawned != 0)
        {
            chunkToSpawn = _checkpointChunkPrefab;
        }
        else
        {
            chunkToSpawn = _chunkPrefabs[Random.Range(0, _chunkPrefabs.Length)];
        }

        return chunkToSpawn;
    }

    float CalculateSpawnPositionZ()
    {
        float spawnPositionZ;

        if (_chunks.Count == 0)
        {
            spawnPositionZ = transform.position.z;
        }
        else
        {
            spawnPositionZ = _chunks[_chunks.Count - 1].transform.position.z + _chunkLength;
        }

        return spawnPositionZ;
    }

    void MoveChunks() 
    {
        for (int i = 0; i < _chunks.Count; i++)
        {
            GameObject chunk = _chunks[i];
            chunk.transform.Translate(-transform.forward * (_moveSpeed * Time.deltaTime));

            if (chunk.transform.position.z <= Camera.main.transform.position.z - _chunkLength)
            {
                _chunks.Remove(chunk);
                Destroy(chunk);
                SpawnChunk();
            }
        }
    }
}