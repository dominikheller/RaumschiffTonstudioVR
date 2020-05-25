using UnityEngine;

public class AudioBox : MonoBehaviour
{
    public GameObject controller;
    public AudioClip[] audioClips;

    private int audioBoxSize = 1;
    private Vector3 negativeAxisOffset = new Vector3(-.5f, -.5f, -.5f);
    private int numberOfClips;
    private int numberOfFieldsPerAxis;
    private float soundFieldSize;

    private AudioClip[,] twoDimensionalArray;
    private int xIndex;
    private int yIndex;
    private int zIndex;

    void Awake()
    {
        numberOfClips = audioClips.Length;
        numberOfFieldsPerAxis = (int)Mathf.Sqrt(numberOfClips);
        soundFieldSize = audioBoxSize / Mathf.Sqrt(numberOfClips);

        mapAudioClipsToTwoDimensionalArray();
    }

    void Update()
    {
        bool AudioSourceOff = false;

        if (controller.transform.localPosition.x < -.5f || controller.transform.localPosition.x > .5f)
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

        if (AudioSourceOff == true)
        {
            gameObject.GetComponent<AudioSource>().mute = true;
        }
        else
        {
            gameObject.GetComponent<AudioSource>().mute = false;
        }

        checkXValues();
        checkYValues();
        checkZValues();
    }

    void mapAudioClipsToTwoDimensionalArray()
    {
        twoDimensionalArray = new AudioClip[numberOfFieldsPerAxis, numberOfFieldsPerAxis];
        for (int i = 0; i < numberOfClips; i++)
        {
            twoDimensionalArray[0, 0] = audioClips[0];
            twoDimensionalArray[0, 1] = audioClips[1];
            twoDimensionalArray[0, 2] = audioClips[2];
            twoDimensionalArray[1, 0] = audioClips[3];
            twoDimensionalArray[1, 1] = audioClips[4];
            twoDimensionalArray[1, 2] = audioClips[5];
            twoDimensionalArray[2, 0] = audioClips[6];
            twoDimensionalArray[2, 1] = audioClips[7];
            twoDimensionalArray[2, 2] = audioClips[8];
        }
    }

    void checkXValues()
    {
        for (int i = 0; i < numberOfFieldsPerAxis; i++)
        {
            if (controller.transform.localPosition.x >= negativeAxisOffset.x + soundFieldSize * i && controller.transform.localPosition.x <= negativeAxisOffset.x + soundFieldSize * (i + 1))
            {
                if (xIndex != i)
                {
                    xIndex = i;
                    setAudioClip();
                }
            }
        }
    }

    void checkYValues()
    {
        for (int i = 0; i < numberOfFieldsPerAxis; i++)
        {
            if (controller.transform.localPosition.y >= negativeAxisOffset.y + soundFieldSize * i && controller.transform.localPosition.y <= negativeAxisOffset.y + soundFieldSize * (i + 1))
            {
                if (yIndex != i)
                {
                    yIndex = i;
                    setAudioClip();
                }
            }
        }
    }

    void checkZValues()
    {
        for (int i = 0; i < numberOfFieldsPerAxis; i++)
        {
            if (controller.transform.localPosition.z >= negativeAxisOffset.z + soundFieldSize * i && controller.transform.localPosition.z <= negativeAxisOffset.z + soundFieldSize * (i + 1))
            {
                if (zIndex != i)
                {
                    zIndex = i;
                    setPitchLevel();
                }
            }
        }
    }

    void setAudioClip()
    {
        gameObject.GetComponent<AudioSource>().clip = twoDimensionalArray[xIndex, yIndex];
        gameObject.GetComponent<AudioSource>().Play();
    }

    void setPitchLevel()
    {
        switch (zIndex)
        {
            case 0:
                gameObject.GetComponent<AudioSource>().pitch -= .5f;
                gameObject.GetComponent<AudioSource>().Play();
                break;
            case 1:
                gameObject.GetComponent<AudioSource>().pitch = 1;
                gameObject.GetComponent<AudioSource>().Play();
                break;
            case 2:
                gameObject.GetComponent<AudioSource>().pitch += .5f;
                gameObject.GetComponent<AudioSource>().Play();
                break;
            default:
                gameObject.GetComponent<AudioSource>().pitch = 1;
                gameObject.GetComponent<AudioSource>().Play();
                break;
        }
    }
}

