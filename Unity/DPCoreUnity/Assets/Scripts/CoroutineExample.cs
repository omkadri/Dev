using UnityEngine;
using System.Collections;

public class GenericCoroutineExample : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(PerformActionAfterDelayRoutine(3f));
    }

    IEnumerator PerformActionAfterDelayRoutine(float delay)
    {
        yield return new WaitForSeconds(delay);

        Debug.Log("Action performed after " + delay + " seconds.");
    }
}
