using UnityEngine;

public class Taktstock : MonoBehaviour
{
    public AudioSource audioSource;

    private float velocity;
    private float velocityRangeLevel;

    private void Start()
    {
        velocityRangeLevel = 0f;
        //InvokeRepeating("setPitchLevel", 0f, .5f);
    }

    // Update is called once per frame
    void Update()
    {
        velocity = GetComponent<VelocityIndicator>().velocity;
        //velocityRangeLevel = getVelocityRangeLevel(velocity);

        audioSource.pitch = velocity + 1;
        audioSource.outputAudioMixerGroup.audioMixer.SetFloat("Pitch", 1f / (velocity + 1));
    }

    private void setPitchLevel()
    {
        audioSource.pitch = velocityRangeLevel + 1;
        audioSource.outputAudioMixerGroup.audioMixer.SetFloat("Pitch", 1f / (velocityRangeLevel + 1));
    }

    private float getVelocityRangeLevel(float velocity)
    {
        float velocityRangeLevelLocal = 0f;

        if (velocity < 0.1)
        {
            velocityRangeLevelLocal = .1f;
        }

        else if (velocity < 0.2)
        {
            velocityRangeLevelLocal = .2f;
        }

        else if (velocity < 0.3)
        {
            velocityRangeLevelLocal = .3f;
        }

        else if (velocity < 0.4)
        {
            velocityRangeLevelLocal = .4f;
        }

        else if (velocity < 0.5)
        {
            velocityRangeLevelLocal = .5f;
        }

        else if (velocity < 0.6)
        {
            velocityRangeLevelLocal = .6f;
        }

        else if (velocity < 0.7)
        {
            velocityRangeLevelLocal = .7f;
        }

        else if (velocity < 0.8)
        {
            velocityRangeLevelLocal = .8f;
        }

        else if (velocity < 0.9)
        {
            velocityRangeLevelLocal = .9f;
        }

        else if (velocity < 1f)
        {
            velocityRangeLevelLocal = 1f;
        }

        return velocityRangeLevelLocal;
    }
}
