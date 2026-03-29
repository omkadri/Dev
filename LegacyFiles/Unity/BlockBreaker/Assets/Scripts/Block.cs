using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Block : MonoBehaviour
{
    //config param
    [SerializeField] AudioClip breakingSound;
    [SerializeField] GameObject blockSparklesVFX;

    [SerializeField] Sprite[] hitSprites;


    // cached reference
    Level level;

    //state variables
    [SerializeField] int timesHit; //TODO only serialized for debug purposes

    private void Start()
    {
        CountBreakableBlocks();
    }

    private void CountBreakableBlocks()
    {
        level = FindObjectOfType<Level>(); // 4 //

        if (tag == "Breakable")
        {
            level.CountBlocks(); // 3 //
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (tag == "Breakable")
        {
            HandleHit();
        }
    }

    private void HandleHit()
    {
        timesHit++;
        int maxHits = hitSprites.Length + 1; // adds consistency in editor with max hits and hitsprites array
        if (timesHit >= maxHits)
        {
            DestroyBlock();
        }
        else
        {
            ShowNextHitSprite();
        }
    }

    private void ShowNextHitSprite()
    {
        int spriteIndex = timesHit - 1; // we do minus 1 because the first value in the sprite array is zero
        if(hitSprites[spriteIndex]!= null)
        {
            GetComponent<SpriteRenderer>().sprite = hitSprites[spriteIndex]; //******************************
        }
        else
        {
            Debug.LogError("Block Sprite is missing from array" + gameObject.name); //**************************************
;        }
    }

    private void DestroyBlock()
    {
        PlayBlockDestroySFX();
        level.BlockDestroyed();
        Destroy(gameObject);
        TriggerSparklesVFX();
    }

    private void PlayBlockDestroySFX()
    {
        FindObjectOfType<GameSession>().AddToScore();
        AudioSource.PlayClipAtPoint(breakingSound, Camera.main.transform.position);// 1 // 
    }

    private void TriggerSparklesVFX()
    {
        GameObject sparkles = Instantiate(blockSparklesVFX, transform.position, transform.rotation); // 5 //
        Destroy(sparkles, 1f); // 6 //
    }
}

// 1 // We play the sound at the coordinates of the main camera because it is louder than playing from the coordinates of the block.

// 2 // gameObject refers to the particular game object a script is attached to

// 3 // everytime a brick is loaded, the breakableBlocks variable in the Leve3l script increases by 1. This is helpful for keeping track of how many block are on screen(or maybe for clearing a room of enemies).

// 4 // This is a replacement for manually linking objects in the inspector. It finds the first object of the specified type and automatically links it.

// 5 // This creates an instance of the VFX as opposed to creating it as its own object.

// 5 // Destroys VFX after 1 second. Although the player does not see the impact this makes, it matters. If too many instances of "sparkles" opccurs, it affect performance 