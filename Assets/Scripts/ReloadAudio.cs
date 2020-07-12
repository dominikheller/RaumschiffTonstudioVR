using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReloadAudio : MonoBehaviour
{
    // Start is called before the first frame update


    public GameObject[] audioSources;
    public float spawnTime;

    Coroutine spawnAudio; 

    void Start()
    {
        spawnAudio = StartCoroutine(SpawnAudioSources());
    }

    IEnumerator SpawnAudioSources()
    {

        yield return new WaitForSeconds(spawnTime);
        foreach (GameObject source in audioSources)
        {
            source.SetActive(true);
        }
    }
}
