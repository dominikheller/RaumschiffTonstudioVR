using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class KippschalterAn : MonoBehaviour
{
    public string effectName;
    public AudioMixer lautsprecherMixer;
    public GameObject lampeRed;
    public GameObject lampeGreen;
    public GameObject lampe3;
    public GameObject lampe4;
    public Material lampeRedAn;
    public Material lampeRedAus;
    public Material lampeGreenAn;
    public Material lampeGreenAus;
    public GameObject animatedObject;
    public BoxCollider thisCollider;
    public GameObject hitboxOn;
    public GameObject hitboxOff;
    private Animator anim;
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


        turnLampOff();

        lautsprecherMixer.SetFloat(effectName + "Wet", 0);
        lautsprecherMixer.SetFloat(effectName + "Dry", 1);

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

        Renderer sliderRend3 = lampe3.GetComponent<Renderer>();
        sliderRend3.material = lampeGreenAn;

        Renderer sliderRend4 = lampe4.GetComponent<Renderer>();
        sliderRend4.material = lampeGreenAn;

    }

    public void turnLampOff()
    {
        Renderer sliderRend = lampeRed.GetComponent<Renderer>();
        sliderRend.material = lampeRedAn;

        Renderer sliderRend2 = lampeGreen.GetComponent<Renderer>();
        sliderRend2.material = lampeGreenAus;

        Renderer sliderRend3 = lampe3.GetComponent<Renderer>();
        sliderRend3.material = lampeGreenAus;

        Renderer sliderRend4 = lampe4.GetComponent<Renderer>();
        sliderRend4.material = lampeGreenAus;

    }

}
