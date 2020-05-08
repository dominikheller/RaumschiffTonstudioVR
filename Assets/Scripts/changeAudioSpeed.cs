using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeAudioSpeed : MonoBehaviour
{

    public AudioSource asource;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    { 
        
    }

    public void changeSpeed(float newSpeed)
    {
        
        asource.pitch = newSpeed*2;
        asource.outputAudioMixerGroup.audioMixer.SetFloat("Pitch", 1f / newSpeed);
    }
}
