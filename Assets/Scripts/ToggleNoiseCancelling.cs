using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class ToggleNoiseCancelling : MonoBehaviour
{
   
    public AudioMixerSnapshot ncOn;
    

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

            ncOn.TransitionTo(3.0f);
         
  
    }



}