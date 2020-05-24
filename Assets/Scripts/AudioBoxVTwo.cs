using UnityEngine;

[RequireComponent(typeof(AudioLowPassFilter))]
public class AudioBoxVTwo : MonoBehaviour
{
    public GameObject controller;

    private float sampling_frequency = 48000;

    [Range(0f, 1f)]
    public float noiseRatio = 0.5f;

    //for noise part
    [Range(-1f, 1f)]
    public float offset;

    public float cutoffOn = 800;
    public float cutoffOff = 100;

    public bool cutOff;

    //for tonal part
    public float frequency = 300f;
    public float gain = 100f;

    private float increment;
    private float phase;

    System.Random rand = new System.Random();
    AudioLowPassFilter lowPassFilter;

    void Awake()
    {
        sampling_frequency = AudioSettings.outputSampleRate;

        lowPassFilter = GetComponent<AudioLowPassFilter>();
        Update();
    }

    void OnAudioFilterRead(float[] data, int channels)
    {
        float tonalPart = 0;
        float noisePart = 0;

        // update increment in case frequency has changed
        increment = frequency * 2f * Mathf.PI / sampling_frequency;

        for (int i = 0; i < data.Length; i++)
        {
            //noise
            noisePart = noiseRatio * (float)(rand.NextDouble() * 2.0 - 1.0 + offset);

            phase = phase + increment;
            if (phase > 2 * Mathf.PI) phase = 0;

            //tone
            tonalPart = (1f - noiseRatio) * (float)(gain * Mathf.Sin(phase));

            //together
            data[i] = noisePart + tonalPart;

            // if we have stereo, we copy the mono data to each channel
            if (channels == 2)
            {
                data[i + 1] = data[i];
                i++;
            }
        }
    }

    void Update()
    {
        bool AudioSourceOff = false;

        gameObject.GetComponent<AudioSource>().pitch = (controller.transform.localPosition.z) + 1.5f;
        gain = (controller.transform.localPosition.x * 1000) + 150f;
        frequency = (controller.transform.localPosition.y * 100) + 350f;

        if(controller.transform.localPosition.x < -.5f || controller.transform.localPosition.x > .5f)
        {
            AudioSourceOff = true;
        }
        if (controller.transform.localPosition.y < -.5f || controller.transform.localPosition.y > .5f)
        {
            AudioSourceOff = true;
        }
        if (controller.transform.localPosition.z < -.5f || controller.transform.localPosition.z > .5f)
        {
            AudioSourceOff = true;
        }

        if(AudioSourceOff == true)
        {
            gameObject.GetComponent<AudioSource>().mute = true;
        } else
        {
            gameObject.GetComponent<AudioSource>().mute = false;
        }

        lowPassFilter.cutoffFrequency = cutOff ? cutoffOn : cutoffOff;
    }
}