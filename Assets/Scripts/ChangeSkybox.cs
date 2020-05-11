using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeSkybox : MonoBehaviour
{

    public Material skyboxToChangeTo;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeTheSkybox()
    {

        RenderSettings.skybox = skyboxToChangeTo;

    }
}
