using System.Collections.Generic;

public static class Algorithms
{
    public static void FisherYatesShuffle<T>(IList<T> list)
    {
        for (int i = 0; i < list.Count; i++)
        {
            int randomIndex = UnityEngine.Random.Range(i, list.Count);

            T item = list[i];
            list[i] = list[randomIndex];
            list[randomIndex] = item;
        }
    }
}