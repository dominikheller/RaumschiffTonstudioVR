using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class ChangeAudioSnapshotByRoom : MonoBehaviour
{

    public float transitionLength;
    public AudioMixerSnapshot snapshot;

    // Start is called before the first frame update
    void Start()
    {

        



    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {

            snapshot.TransitionTo(transitionLength);

        }


    }


}
