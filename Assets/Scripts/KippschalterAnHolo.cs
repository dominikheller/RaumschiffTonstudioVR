using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class KippschalterAnHolo : MonoBehaviour
{
    public GameObject lampeRed;
    public GameObject lampeGreen;
    public Material lampeRedAn;
    public Material lampeRedAus;
    public Material lampeGreenAn;
    public Material lampeGreenAus;
    public GameObject animatedObject;
    private Animator anim;

    public GameObject animatedObject2;
    private Animator anim2;

    public GameObject animatedObject3;
    private Animator anim3;

    public GameObject hitboxOn;
    public GameObject hitboxOff;
    public BoxCollider thisCollider;
    public AudioSource aSource;
    // public AudioSource asourceL;
    // public AudioSource asourceR;

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

        anim = animatedObject.GetComponent<Animator>();
        anim.Play("KippschlaterOnZuOff");

        anim2 = animatedObject2.GetComponent<Animator>();
        anim2.Play("holobaseoff");

        anim3 = animatedObject3.GetComponent<Animator>();
        anim3.Play("XyloONtoOFF");

        turnLampOff();

        aSource.Play();

        thisCollider.enabled = !thisCollider.enabled;

        StartCoroutine(waitForTransition());

    }






    IEnumerator waitForTransition()
    {
        yield return new WaitForSeconds(1.0f);

        thisCollider.enabled = !thisCollider.enabled;
        hitboxOff.SetActive(true);
        hitboxOn.SetActive(false);

    }





    public void turnLampOn()
    {
        Renderer sliderRend = lampeRed.GetComponent<Renderer>();
        sliderRend.material = lampeRedAus;

        Renderer sliderRend2 = lampeGreen.GetComponent<Renderer>();
        sliderRend2.material = lampeGreenAn;


    }

    public void turnLampOff()
    {
        Renderer sliderRend = lampeRed.GetComponent<Renderer>();
        sliderRend.material = lampeRedAn;

        Renderer sliderRend2 = lampeGreen.GetComponent<Renderer>();
        sliderRend2.material = lampeGreenAus;


    }

}
