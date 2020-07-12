using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class LevelStartAudioSnapshotTransition : MonoBehaviour
{

    public float timeTillTransition;
    public AudioMixerSnapshot mutedBeginning;
    public AudioMixerSnapshot normal;

    // Start is called before the first frame update
    void Start()
    {

        StartCoroutine(waitForTransition());


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator waitForTransition()
    {
        yield return new WaitForSeconds(timeTillTransition);

        normal.TransitionTo(1f);

    }


}
