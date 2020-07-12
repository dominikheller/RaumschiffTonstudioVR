using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class ToggleNoiseCancelling : MonoBehaviour
{
    public bool on = false;
    public AudioMixerSnapshot ncOn;
    public AudioMixerSnapshot ncOff;

    // Start is called before the first frame update
    void Start()
    {

        



    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void toggleNc()
    {

        if (on == false)
        {
            ncOn.TransitionTo(3);
            on = true;
        }

        if (on == true)
        {
            ncOff.TransitionTo(3);
            on = false;
        }

    }



}
