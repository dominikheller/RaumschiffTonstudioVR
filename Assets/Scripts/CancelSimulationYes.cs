using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CancelSimulationYes : MonoBehaviour
{


    public GameObject confirmPanel;
    
   

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
        if (other.tag == "OtherHand")
        {
            confirmPanel.SetActive(false);

            //change the level back to spaceship script here
        
        }


        }

}
