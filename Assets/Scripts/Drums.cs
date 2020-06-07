using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drums : MonoBehaviour
{
    public AudioSource audioData;

    void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Drumstick")
        {
            audioData.Play();
        }
    }
}
