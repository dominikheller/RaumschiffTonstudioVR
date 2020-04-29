using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ChangeMaterialWhileAudioIsPlaying : MonoBehaviour
{
    
    public GameObject gameObject;
    public GameObject gameObject2;
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
            Renderer rend2 = gameObject2.GetComponent<Renderer>();
            rend2.material = materialNone;
       
        }

        else if (audioSource.isPlaying)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialDuring;
            Renderer rend2 = gameObject2.GetComponent<Renderer>();
            rend2.material = materialDuring;

        }

        else
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialBefore;
            Renderer rend2 = gameObject2.GetComponent<Renderer>();
            rend2.material = materialBefore;
        }
    }
}