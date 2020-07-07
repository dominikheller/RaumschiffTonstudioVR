using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AudioButtonLoopToggle: MonoBehaviour
{
    
    public AudioSource audioSource;

    void Start()
    {
        
    }

    void Update()
    {
        

    }

    public void toggleAudioLoop()
    {
        if (audioSource.isPlaying) {

            audioSource.Pause();
        }

        else
        {
            audioSource.Play();
        }

    }

}