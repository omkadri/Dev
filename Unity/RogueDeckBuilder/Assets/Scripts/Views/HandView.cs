using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine.Splines;

public class HandView : MonoBehaviour
{
    [SerializeField] SplineContainer _splineContainer;
    readonly List<CardView> _cards = new();

    public IEnumerator AddCard(CardView cardView)
    {
        _cards.Add(cardView);
        yield return UpdateCardPositionsRountine(0.15f);
    }

    IEnumerator UpdateCardPositionsRountine(float duration)
    {
        if (_cards.Count == 0)
        {
            yield break;
        }

        float cardSpacing = 1.0f / 10.0f; //TODO: make configurable: 10F == max cards in hand
        float firstCardPosition = 0.5f - (_cards.Count - 1) * cardSpacing / 2.0f;
        Spline spline = _splineContainer.Spline;
        for (int i = 0; i < _cards.Count; i++)
        {
            float p = firstCardPosition + i * cardSpacing;
            Vector3 splinePosition = spline.EvaluatePosition(p);
            Vector3 forward = spline.EvaluateTangent(p);
            Vector3 up = spline.EvaluateUpVector(p);
            Quaternion rotation = Quaternion.LookRotation(-up, Vector3.Cross(-up, forward).normalized);
            _cards[i].transform.DOMove(splinePosition + transform.position + 0.01f * i * Vector3.back, duration);
            _cards[i].transform.DORotate(rotation.eulerAngles, duration);
        }
        yield return new WaitForSeconds(duration);
    }
    
}
