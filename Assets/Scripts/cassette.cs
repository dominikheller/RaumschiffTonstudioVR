using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cassette : MonoBehaviour
{
    public Animator anim;
    public AudioClip clipL;
    public AudioClip clipR;
    public AudioSource audiosourceL;
    public AudioSource audiosourceR;
    public bool isSynth = false;
    public GameObject synthObject;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void playAnimation()
    {

        anim.Play("KassetteDrehen");

        if (isSynth == true)
        {
            synthObject.GetComponent<SynthwaveToggle>().activateSynthwave();
        }

    }

    public void stopAnimation()
    {

        anim.Play("KassetteStill");

        if (isSynth == true)
        {
            synthObject.GetComponent<SynthwaveToggle>().deactivateSynthwave();
        }

    }

    public void setMusic()
    {
        audiosourceL.clip = clipL;
        audiosourceR.clip = clipR;
    }

    public void playMusic()
    {
        audiosourceL.Play();
        audiosourceR.Play();
    }

    public void pauseMusic()
    {
        audiosourceL.Pause();
        audiosourceR.Pause();
    }

    public void stopMusic()
    {
        audiosourceL.Stop();
        audiosourceR.Stop();
    }

}
