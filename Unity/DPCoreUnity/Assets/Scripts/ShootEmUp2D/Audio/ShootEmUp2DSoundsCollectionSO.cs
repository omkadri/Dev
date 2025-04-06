using UnityEngine;

[CreateAssetMenu(fileName = "New Sounds Collection", menuName = "Game Object/Audio/Sounds Collection")]//TODO: Move this below "Sound" if possible
public class ShootEmUp2DSoundsCollectionSO : ScriptableObject
{
    public SoundSO[] PlayerRangedWeaponShootSFX;
    public SoundSO[] PlayerJumpSFX;
    public SoundSO[] SplatSFX;
}
