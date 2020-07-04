using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SynthwaveToggle : MonoBehaviour
{

    public Material skyboxToChangeTo; 
    public Material skyboxDefault;
    public bool synthOn = false;
    public GameObject synthScape;
    public AudioClip clipL;
    public AudioClip clipR;
    public AudioSource audiosourceL;
    public AudioSource audiosourceR;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void toggleSynthwave()
    {
        if (synthOn == false)
        {
            RenderSettings.skybox = skyboxToChangeTo;
            synthScape.SetActive(true);

            audiosourceL.clip = clipL;
            audiosourceR.clip = clipR;
            audiosourceL.Play();
            audiosourceR.Play();

            synthOn = true;
           
        }
        
        else if (synthOn == true)
        {

            RenderSettings.skybox = skyboxDefault;
            synthScape.SetActive(false);

            audiosourceL.Stop();
            audiosourceR.Stop();

            synthOn = false;

        }

    }
}
