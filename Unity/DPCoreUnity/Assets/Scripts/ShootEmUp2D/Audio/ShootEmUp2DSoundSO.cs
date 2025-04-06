using UnityEngine;

[CreateAssetMenu(fileName = "New Sound", menuName = "Game Object/Audio/Sound")]
public class ShootEmUp2DSoundSO : ScriptableObject
{
    public enum AudioTypes 
    {
        SFX,
        Music,
        Dialogue
    }

    public AudioTypes AudioType;
    public AudioClip Clip;
    public bool Loop = false;
    public bool RandomizePitch = false;
    [Range( 0f, 1f )]
    public float RandomPitchRangeModifier = 0.1f;
    [Range( 0.1f, 2f )]//we use .1 to always make sure the sound is coming through properly (even if we don't wanna hear it)
    public float Volume = 1f;
    [Range( 0.1f, 3f )]
    public float Pitch = 1f;
}