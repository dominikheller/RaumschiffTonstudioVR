using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bowlingball : MonoBehaviour
{
    public AudioSource collisionSound;
    public AudioSource rotationSound;

    Vector3 ballStartingLocation;
    Rigidbody rb;

    private bool isGrounded;

    // Start is called before the first frame update
    void Start()
    {
        ballStartingLocation = transform.position;
        rb = this.gameObject.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if(rb.angularVelocity.magnitude > 1)
        {
            if(!rotationSound.isPlaying && isGrounded == true)
            {
                rotationSound.Play();
                changeAudioVolume();
                //changeAudioSpeed(2);
            }
        }

        if(rb.angularVelocity.magnitude < 1)
        {
            rotationSound.Stop();
        }
    }

    public void resetBowlingBall()
    {
        this.gameObject.transform.position = ballStartingLocation;
        this.gameObject.transform.rotation = Quaternion.identity;
        rb.velocity = new Vector3(0.0f, 0.0f, 0.0f);
        rb.angularVelocity = new Vector3(0.0f, 0.0f, 0.0f);
    }

    void OnCollisionEnter(Collision collision)
    {
        isGrounded = true;
        collisionSound.Play();
    }

    private void OnCollisionExit(Collision collision)
    {
        isGrounded = false;
    }

    public void changeAudioSpeed(float newSpeed)
    {
        rotationSound.pitch = newSpeed * 2;
        rotationSound.outputAudioMixerGroup.audioMixer.SetFloat("Pitch", 1f / newSpeed);
    }

    public void changeAudioVolume()
    {
        if(rb.angularVelocity.magnitude > 1)
        {
            rotationSound.volume = .1f;
        }
        if (rb.angularVelocity.magnitude > 2)
        {
            rotationSound.volume = .2f;
        }
        if (rb.angularVelocity.magnitude > 3)
        {
            rotationSound.volume = .4f;
        }
        if (rb.angularVelocity.magnitude > 4)
        {
            rotationSound.volume = .6f;
        }
        if (rb.angularVelocity.magnitude > 5)
        {
            rotationSound.volume = .8f;
        }
    }
}
