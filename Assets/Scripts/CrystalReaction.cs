using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalReaction : MonoBehaviour
{
    private AudioSource audioData;
    private Animator anim;
    private bool triggered = false;


    void Start()
    {
        anim = this.gameObject.GetComponent<Animator>();
        audioData = this.gameObject.GetComponent<AudioSource>();
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "PlayerHeadset")
        {
            anim.Play("glow");
            audioData.Play(0);
        }
    }

}


