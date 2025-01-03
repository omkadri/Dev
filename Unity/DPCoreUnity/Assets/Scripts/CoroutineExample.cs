using UnityEngine;
using System.Collections;

public class GenericCoroutineExample : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(PerformActionAfterDelay(3f));
    }

    IEnumerator PerformActionAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);

        Debug.Log("Action performed after " + delay + " seconds.");
    }
}
