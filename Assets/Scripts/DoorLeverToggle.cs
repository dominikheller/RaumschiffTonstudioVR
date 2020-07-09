using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorLeverToggle : MonoBehaviour
{


    public GameObject lampeRed;
    public GameObject lampeGreen;
    public Material lampeRedAn;
    public Material lampeRedAus;
    public Material lampeGreenAn;
    public Material lampeGreenAus;
    public GameObject animatedDoor1;
    public GameObject animatedDoor2;
    private Animator anim1;
    private Animator anim2;
    public AudioSource doorSoundSource1;
    public AudioSource doorSoundSource2;
    public bool doorOpen;

    // Start is called before the first frame update
    void Start()
    {
        doorOpen = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void toggleDoor()
    {

        if (doorOpen == false)
        {

            anim2 = animatedDoor2.GetComponent<Animator>();
            anim2.Play("Door1Open");
            doorSoundSource2.Play();

            Renderer sliderRend = lampeRed.GetComponent<Renderer>();
            sliderRend.material = lampeRedAus;

            Renderer sliderRend2 = lampeGreen.GetComponent<Renderer>();
            sliderRend2.material = lampeGreenAn;


            StartCoroutine(waitForSecondDoorOpen());


        }

        if (doorOpen == true) {

            anim1 = animatedDoor1.GetComponent<Animator>();
            anim1.Play("Door1Close");
            doorSoundSource1.Play();

            

            Renderer sliderRend = lampeRed.GetComponent<Renderer>();
            sliderRend.material = lampeRedAn;

            Renderer sliderRend2 = lampeGreen.GetComponent<Renderer>();
            sliderRend2.material = lampeGreenAus;


            StartCoroutine(waitForSecondDoorClose());

        }



    }


    IEnumerator waitForSecondDoorOpen()
    {
        yield return new WaitForSeconds(1.0f);

        anim1 = animatedDoor1.GetComponent<Animator>();
        anim1.Play("Door1Open");
        doorSoundSource1.Play();

        

            doorOpen = true;
        
    }

    IEnumerator waitForSecondDoorClose()
    {
        yield return new WaitForSeconds(1.0f);

            anim2 = animatedDoor2.GetComponent<Animator>();
            anim2.Play("Door1Close");
            doorSoundSource2.Play();


            doorOpen = false;
        

    }


}
