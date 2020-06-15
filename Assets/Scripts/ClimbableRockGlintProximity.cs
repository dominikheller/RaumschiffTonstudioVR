using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClimbableRockGlintProximity: MonoBehaviour
{
    public Material glintOn;
    public Material glintOff;
    public float secondsUntilGlint = 5;



    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "PlayerHeadsetClimbGlint")
        {
            StartCoroutine(waitForGlint());
        }
    }



IEnumerator waitForGlint()
{
    yield return new WaitForSeconds(secondsUntilGlint);

        Renderer rend = this.gameObject.GetComponent<Renderer>();
        rend.material = glintOn;
    }



private void OnTriggerExit(Collider other)
    {
        if (other.tag == "PlayerHeadsetClimbGlint")
        {
            Renderer rend = this.gameObject.GetComponent<Renderer>();
            rend.material = glintOff;
        }

    }


}


