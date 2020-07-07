using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ChangeMaterialWhileAudioIsPlayingOnlyOneObject: MonoBehaviour
{
    
    public GameObject gameObject;
    public AudioSource audioSource;
    public Material materialBefore;
    public Material materialDuring;
    public Material materialNone;

    void Start()
    {
        
    }

    void Update()
    {
        if (audioSource.clip == null)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialNone;
       
        }

        else if (audioSource.isPlaying)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialDuring;

        }

        else
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialBefore;
        }
    }
}