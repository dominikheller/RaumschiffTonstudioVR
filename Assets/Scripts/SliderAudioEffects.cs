using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SliderAudioEffects : MonoBehaviour
{
    public string effectName;
    public AudioMixer lautsprecherMixer;
    public float OldMinimumValue;
    public float OldMaximumValue;
    public float NewMinimumValue;
    public float NewMaximumValue;
    public GameObject lampe;
    public GameObject lampe2;
    public GameObject lampe3; 
    public GameObject lampe4;
    public Material lampeAn;
    public Material lampeAus;
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


    public float scale(float OldValue)
    {
        float OldMin = OldMinimumValue;
        float OldMax = OldMaximumValue;

        float NewMin = NewMinimumValue;
        float NewMax = NewMaximumValue;

        float OldRange = (OldMax - OldMin);
        float NewRange = (NewMax - NewMin);
        float NewValue = (((OldValue - OldMin) * NewRange) / OldRange) + NewMin;

        return (NewValue);
    }

    


    public void doEffect(float sliderValue)
    {

        float effectValue = scale(sliderValue);

        lautsprecherMixer.SetFloat(effectName, effectValue);

        if (sliderValue > 0.501f)
        {
            turnLampOn();
        }

        else if (sliderValue < 0.501f)
        {
            turnLampOff();
        }

    }


    public void invertDryAndWetMix(float sliderValue)
    {

        float effectValue = scale(sliderValue);


        lautsprecherMixer.SetFloat(effectName + "Wet", effectValue);
        lautsprecherMixer.SetFloat(effectName + "Dry", -effectValue +1);

        if (sliderValue > 0.501f)
        {
            turnLampOn();
        }

        else if (sliderValue < 0.501f)
        {
            turnLampOff();
        }

    }


    public void doEffectLog(float sliderValue)
    {

        float effectValue = scale(sliderValue);
        effectValue = Mathf.Log10(effectValue) * 20;

        lautsprecherMixer.SetFloat(effectName, effectValue);

        if (sliderValue > 0.501f)
        {
            turnLampOn();
        }

        else if (sliderValue < 0.501f)
        {
            turnLampOff();
        }

    }



    public void doSpeedChange(float sliderValue)
    {

        float effectValue = scale(sliderValue);

        lautsprecherMixer.SetFloat("pitch", effectValue);
        lautsprecherMixer.SetFloat("pitchCorrection", 1f / effectValue);



        if (sliderValue > 0.501f)
        {
            turnLampOn();
        }

        else if (sliderValue < 0.501f)
        {
            turnLampOff();
        }

    }


    public void turnLampOn()
    {
        Renderer sliderRend = lampe.GetComponent<Renderer>();
        sliderRend.material = lampeAn;

        Renderer sliderRend2 = lampe2.GetComponent<Renderer>();
        sliderRend2.material = lampeAn;

        Renderer sliderRend3 = lampe3.GetComponent<Renderer>();
        sliderRend3.material = lampeAn;

        Renderer sliderRend4 = lampe4.GetComponent<Renderer>();
        sliderRend4.material = lampeAn;

    }

    public void turnLampOff()
    {
        Renderer sliderRend = lampe.GetComponent<Renderer>();
        sliderRend.material = lampeAus;
        

        Renderer sliderRend2 = lampe2.GetComponent<Renderer>();
        sliderRend2.material = lampeAus;

        Renderer sliderRend3 = lampe3.GetComponent<Renderer>();
        sliderRend3.material = lampeAus;

        Renderer sliderRend4 = lampe4.GetComponent<Renderer>();
        sliderRend4.material = lampeAus;

    }

}
