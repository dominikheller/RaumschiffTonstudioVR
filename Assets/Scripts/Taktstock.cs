using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Taktstock : MonoBehaviour
{

    public AudioSource audioSource;
    public Rigidbody rigidbody;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var audioClipSpeed = 1.0f;
        var p = rigidbody.velocity.magnitude / audioClipSpeed;
        audioSource.pitch = Mathf.Clamp(p, 0.0f, 1.3f); // p is clamped to sane values


    }
}
