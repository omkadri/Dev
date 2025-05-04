using UnityEngine;

public class ShootEmUp2DDeathSplatterHandler : MonoBehaviour
{
        void OnEnable()
    {
        ShootEmUp2DHealth.OnDeath += SpawnDeathSplatterPrefab;
        ShootEmUp2DHealth.OnDeath += SpawnDeathVFX;
    }


    void OnDisable()
    {
        ShootEmUp2DHealth.OnDeath -= SpawnDeathSplatterPrefab;
        ShootEmUp2DHealth.OnDeath -= SpawnDeathVFX;
    }


    void SpawnDeathSplatterPrefab( ShootEmUp2DHealth sender )//TODO: Investigate the syntax of using sender
    {
        GameObject newSplatterPrefab = Instantiate( sender.SplatterPrefab, sender.transform.position, transform.rotation );//TODO: Investigate randomizing rotation
        SpriteRenderer deathSplatterSpriteRenderer = newSplatterPrefab.GetComponent<SpriteRenderer>();
        ShootEmUp2DColorChanger colorChanger = sender.GetComponent<ShootEmUp2DColorChanger>();

        if( colorChanger )
        {
            Color currentColor = colorChanger.DefaultColor;
            deathSplatterSpriteRenderer.color = currentColor;
        }
    
        newSplatterPrefab.transform.SetParent( this.transform );//this will parent all splatter prefabs to the same game object in hierarchy (for easier sorting)
    }


    void SpawnDeathVFX( ShootEmUp2DHealth sender )
    {
        GameObject newDeathVFX = Instantiate( sender.DeathVFX, sender.transform.position, transform.rotation );
        ParticleSystem.MainModule ps = newDeathVFX.GetComponent<ParticleSystem>().main;
        ShootEmUp2DColorChanger colorChanger = sender.GetComponent<ShootEmUp2DColorChanger>();

        if( colorChanger )
        {
            Color currentColor = colorChanger.DefaultColor;
            ps.startColor = currentColor;
        }

        newDeathVFX.transform.SetParent( this.transform );//technically not as important as SpawnDeathSplatterPrefab version because the particles get destroyed quickly
    }

    //TODO: Make a resize function for splatter variation

    //TODO: Make a rotate function for splatter variation
}