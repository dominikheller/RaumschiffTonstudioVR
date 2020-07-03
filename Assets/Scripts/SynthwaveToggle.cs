using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SynthwaveToggle : MonoBehaviour
{

    public Material skyboxToChangeTo; 
    public Material skyboxDefault;
    public bool synthOn = false;
    public GameObject synthScape;

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
            synthOn = true;
        }
        
        else if (synthOn == true)
        {

            RenderSettings.skybox = skyboxDefault;
            synthScape.SetActive(false);
            synthOn = false;

        }

    }
}
