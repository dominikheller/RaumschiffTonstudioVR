using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class xylophone : MonoBehaviour
{
    public AudioSource audioData;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "playsXylo")
        {
            GameObject parentObject = findParentByTag(other.gameObject, "PrimaryGrab");

            if(parentObject)
            {
                float velocity = parentObject.GetComponent<VelocityIndicator>().velocity;
                audioData.volume = velocity;
                audioData.Play(0);
            } else
            {
                audioData.Play(0);
            }
        }
    }

    public static GameObject findParentByTag(GameObject childObject, string tag)
    {
        Transform t = childObject.transform;
        while (t.parent != null)
        {
            if (t.parent.tag == tag)
            {
                return t.parent.gameObject;
            }
            t = t.parent.transform;
        }
        return null;
    }
}


