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
    public Animator transitionAnimator;

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
        audiosourceL.clip = clipL;
        audiosourceR.clip = clipR;
        audiosourceL.PlayDelayed(0.7f);
        audiosourceR.PlayDelayed(0.7f);

        transitionAnimator.Play("TransitionPlane");

        StartCoroutine(waitForTransition());

        }

    IEnumerator waitForTransition()
    {
        yield return new WaitForSeconds(0.5f);

        if (synthOn == false)
        {
            RenderSettings.skybox = skyboxToChangeTo;
            synthScape.SetActive(true);

            

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
