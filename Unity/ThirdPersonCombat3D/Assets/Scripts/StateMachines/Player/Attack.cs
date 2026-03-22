using System;
using UnityEngine;

[Serializable]
public class Attack
{
    [field: SerializeField] public string AnimationName { get; set; }
    [field: SerializeField] public float TransitionDuration { get; set; }
    [field: SerializeField] public int ComboStateIndex { get; set; } = -1;
    [field: SerializeField] public float ComboAttackTime { get; set; }
}