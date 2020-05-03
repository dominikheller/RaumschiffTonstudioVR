using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class xylophone : MonoBehaviour
{

    public AudioSource audioData;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other)
    {
        audioData.Play(0);
    }


}
