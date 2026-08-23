using System.Collections;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] GameObject _playerSprite;
    Vector3 _originalPosition;
    Animator _animator;
    ParticleSystem _healVFX; //TODO: Serialize???
    Health _health;

    void Awake()
    {
        _animator = _playerSprite.GetComponent<Animator>();
        _health = GetComponent<Health>();
        _healVFX = _playerSprite.GetComponentInChildren<ParticleSystem>(); //TODO: Serialize???
    }

    void Start()
    {
        _originalPosition = _playerSprite.transform.position;
    }

    void OnEnable()
    {
        PlayerEvents.OnCardPlayed += HandleCardPlayed;
    }

    void OnDisable()
    {
        PlayerEvents.OnCardPlayed -= HandleCardPlayed;
    }

    void HandleCardPlayed(CardData cardData)
    {
        Debug.Log("Handler Ran");
        if(cardData.AttackPower > 0)
        {
            Attack(cardData);
        }
        if(cardData.HealPower > 0)
        {
            Heal(cardData);
        }
    }

    void Attack(CardData cardData)
    {
        Debug.Log("Attack: " + cardData.AttackPower);
        StartCoroutine(PlayerAttackAnimRoutine());
    }

    void Heal(CardData cardData)
    {
        Debug.Log("Heal: " + cardData.HealPower);
        _health.HealDamage(cardData.HealPower);
        _healVFX.Play();
    }

    IEnumerator PlayerAttackAnimRoutine()
    {
        Vector3 targerPosition = _originalPosition + new Vector3(4f, 0, 0); //TODO: Magic Number

        float duration = 0.5f;//TODO: Magic Number
        float timeElapsed = 0f;//TODO: Magic Number

        //move forward
        while(timeElapsed < duration)
        {
            _playerSprite.transform.position = Vector3.Lerp(_originalPosition, targerPosition, timeElapsed/duration);
            timeElapsed += Time.deltaTime;

            yield return null;
        }

        _animator.Play("Attack"); //TODO: expose as serialized field???

        yield return new WaitForSeconds(0.5f); //TODO: Magic number. maybe a more systematic approach???

        timeElapsed = 0;

        //move back to starting position
        while(timeElapsed < duration)
        {
            _playerSprite.transform.position = Vector3.Lerp(targerPosition, _originalPosition, timeElapsed/duration);
            timeElapsed += Time.deltaTime;

            yield return null;
        }

        yield return null;
    }
}