using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Defender : MonoBehaviour
{
        [SerializeField] int _starCost = 100;
        
        public int GetStarCost()
        {
                return _starCost;
        }

        public void AddStars(int amount)
        {
              FindFirstObjectByType<StarDisplay>().AddStars(amount);//TODO: Fix tight coupling
        }
}