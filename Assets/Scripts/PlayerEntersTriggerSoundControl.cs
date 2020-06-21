using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerEntersTriggerSoundControl : MonoBehaviour
{
    public AudioSource audioSource;
    private bool soundPlayed;

    private void Start()
    {
        soundPlayed = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "PlayerHeadset" && soundPlayed == false)
        {
            audioSource.Play();
            soundPlayed = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        soundPlayed = false;
    }
}

