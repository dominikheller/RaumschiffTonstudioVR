using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Torch : MonoBehaviour
{
    public AudioSource audioSource;
    public bool isGrabbed;
    private float velocity;

    // Update is called once per frame
    void Update()
    {
        if(isGrabbed == true)
        {
            velocity = GetComponent<VelocityIndicator>().velocity;
            audioSource.volume = .1f + velocity;

            if(velocity > 5f)
            {
                audioSource.volume = 0;
            }
        } else
        {
            StartCoroutine(ExecuteAfterTime(.5f));
        }
    }

    IEnumerator ExecuteAfterTime(float time)
    {
        yield return new WaitForSeconds(time);
        audioSource.volume = 0;
    }

    public void setGrabStatusActive()
    {
        isGrabbed = true;
    }

    public void setGrabStatusInactive()
    {
        isGrabbed = false;
    }
}
