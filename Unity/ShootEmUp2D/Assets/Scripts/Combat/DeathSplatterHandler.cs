using UnityEngine;

public class DeathSplatterHandler : MonoBehaviour
{
        void OnEnable()
    {
        Health.OnDeath += SpawnDeathSplatterPrefab;
        Health.OnDeath += SpawnDeathVFX;
    }


    void OnDisable()
    {
        Health.OnDeath -= SpawnDeathSplatterPrefab;
        Health.OnDeath -= SpawnDeathVFX;
    }


    void SpawnDeathSplatterPrefab(Health sender)//TODO: Investigate the syntax of using sender
    {
        GameObject newSplatterPrefab = Instantiate(sender.SplatterPrefab, sender.transform.position, transform.rotation);//TODO: Investigate randomizing rotation
        SpriteRenderer deathSplatterSpriteRenderer = newSplatterPrefab.GetComponent<SpriteRenderer>();
        ColorChanger colorChanger = sender.GetComponent<ColorChanger>();

        if(colorChanger)
        {
            Color currentColor = colorChanger.DefaultColor;
            deathSplatterSpriteRenderer.color = currentColor;
        }
    
        newSplatterPrefab.transform.SetParent(this.transform);//this will parent all splatter prefabs to the same game object in hierarchy (for easier sorting)
    }


    void SpawnDeathVFX(Health sender)
    {
        GameObject newDeathVFX = Instantiate(sender.DeathVFX, sender.transform.position, transform.rotation);
        ParticleSystem.MainModule ps = newDeathVFX.GetComponent<ParticleSystem>().main;
        ColorChanger colorChanger = sender.GetComponent<ColorChanger>();

        if(colorChanger)
        {
            Color currentColor = colorChanger.DefaultColor;
            ps.startColor = currentColor;
        }

        newDeathVFX.transform.SetParent(this.transform);//technically not as important as SpawnDeathSplatterPrefab version because the particles get destroyed quickly
    }

    //TODO: Make a resize function for splatter variation

    //TODO: Make a rotate function for splatter variation
}