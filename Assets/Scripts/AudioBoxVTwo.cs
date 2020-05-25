using UnityEngine;

[RequireComponent(typeof(AudioLowPassFilter))]
public class AudioBoxVTwo : MonoBehaviour
{
    public GameObject controller;

    private float sampling_frequency = 44000;

    private float noiseRatio = .5f;
    public float offset;

    public float frequency = 0;
    public float gain = 0;

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
        increment = frequency * 2f * Mathf.PI / sampling_frequency;

        for (int i = 0; i < data.Length; i++)
        {
            noisePart = noiseRatio * (float)(rand.NextDouble() * 2.0 - 1.0 + offset);
            phase = phase + increment;
            if (phase > 2 * Mathf.PI) phase = 0;

            tonalPart = (1f - noiseRatio) * (float)(gain * Mathf.Sin(phase));
            data[i] = noisePart + tonalPart;
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

        // spatial blend is just a temporary third axis sound effect and should be replaced with a more fitting parameter
        gameObject.GetComponent<AudioSource>().spatialBlend = controller.transform.localPosition.z + .5f;
        gain = (controller.transform.localPosition.x * 100) + 50f;
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
    }
}