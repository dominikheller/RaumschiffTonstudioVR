using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerTransition : MonoBehaviour
{
    public Animator transition;
    public bool triggerTransition;

    private void Update()
    {
        if(triggerTransition == true)
        {
            triggerCrossfade();
        }
    }

    public void triggerCrossfade()
    {
        transition.SetTrigger("Complete");
        triggerTransition = false;
    }
}
