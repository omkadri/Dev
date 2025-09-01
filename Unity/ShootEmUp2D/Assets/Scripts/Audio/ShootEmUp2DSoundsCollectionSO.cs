using UnityEngine;

[CreateAssetMenu(fileName = "New Sounds Collection", menuName = "Game Object/Audio/Sounds Collection")]//TODO: Move this below "Sound" if possible
public class ShootEmUp2DSoundsCollectionSO : ScriptableObject
{
    [Header("SFX")]
    public SoundSO[] PlayerRangedWeaponShootSFX;
    public SoundSO[] PlayerJumpSFX;
    public SoundSO[] SplatSFX;
    public SoundSO[] JetpackSFX;
    public SoundSO[] GrenadeShootSFX;
    public SoundSO[] GrenadeBeepSFX;
    public SoundSO[] GrenadeExplodeSFX;
    public SoundSO[] PlayerHit;
    public SoundSO[] MegaKill;

    [Header("Music")]
    public SoundSO[] FightMusic;
    public SoundSO[] DiscoPartyMusic;

    //TODO: add dialogue header
}
