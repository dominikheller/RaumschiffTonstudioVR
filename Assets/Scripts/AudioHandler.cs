using System.Collections;
using UnityEngine;

public class AudioHandler : MonoBehaviour
{
    bool canPlay;

    private void Start()
    {
        canPlay = true;
    }

    public void playAudio(AudioSource audioClip, float volume)
    {
        if (canPlay)
        {
            canPlay = false;
            GetComponent<AudioSource>().volume = volume;
            GetComponent<AudioSource>().PlayOneShot(audioClip.clip);
        }

        StartCoroutine(Reset());
    }

    IEnumerator Reset()
    {
        yield return new WaitForSeconds(.2f);
        canPlay = true;
    }
}
