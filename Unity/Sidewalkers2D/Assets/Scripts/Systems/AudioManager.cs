using System;
using UnityEngine;

public class AudioManager : Singleton<AudioManager>
{
    [SerializeField] AudioClip _playCardSFX;
    [SerializeField] private AudioClip _cardDrawSFX;
    [SerializeField] private AudioClip _playerHitSFX;
    [SerializeField] private AudioClip _playerDeathSFX;
    [SerializeField] private AudioClip _healSFX;
    [SerializeField] private AudioClip _reshuffleSFX;
    [SerializeField] private AudioClip _enemyHitSFX;
    [SerializeField] private AudioClip _enemyDeathSFX;


    AudioSource _audioSource;

    protected override void Awake()
    {
        base.Awake();
        _audioSource = gameObject.GetComponent<AudioSource>();
    }

    void OnEnable()
    {
        PlayerEvents.OnCardPlayed += CardPlayed;
        PlayerEvents.OnDrawCardRequested += CardDrawn;
        PlayerEvents.OnPlayerHit += PlayerHit;
        PlayerEvents.OnPlayerDeath += PlayerDeath;
        PlayerEvents.OnPlayerHealed += PlayerHealed;
        PlayerEvents.OnReshuffleRequested += Reshuffle;
        EnemyEvents.OnEnemyHit += EnemyHit;
        EnemyEvents.OnEnemyDeath += EnemyDeath;

    }

    void OnDisable()
    {
        PlayerEvents.OnCardPlayed -= CardPlayed;
        PlayerEvents.OnDrawCardRequested -= CardDrawn;
        PlayerEvents.OnPlayerHit -= PlayerHit;
        PlayerEvents.OnPlayerDeath -= PlayerDeath;
        PlayerEvents.OnPlayerHealed -= PlayerHealed;
        PlayerEvents.OnReshuffleRequested -= Reshuffle;
        EnemyEvents.OnEnemyHit -= EnemyHit;
        EnemyEvents.OnEnemyDeath -= EnemyDeath;

    }

    void CardPlayed(CardData _) //underscore denoted that we will not be needing the CardData parameter
    {
        PlaySFX(_playCardSFX);
    }

    void CardDrawn()
    {
        PlaySFX(_cardDrawSFX);
    }

    void PlayerHit(int _)
    {
        PlaySFX(_playerHitSFX);
    }

    void PlayerDeath()
    {
        PlaySFX(_playerDeathSFX);
    }

    void PlayerHealed()
    {
        PlaySFX(_healSFX);
    }

    void Reshuffle()
    {
        PlaySFX(_reshuffleSFX);
    }

    void EnemyHit(CardData _)
    {
        PlaySFX(_enemyHitSFX);
    }

    void EnemyDeath()
    {
        PlaySFX(_playerDeathSFX);
    }

    void PlaySFX(AudioClip audioClip)
    {
        if (audioClip)
        {
            _audioSource.PlayOneShot(audioClip); //PlayOneShot ensures that audio clips do not cut each other off
        }
    }
}
