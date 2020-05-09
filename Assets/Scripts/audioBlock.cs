using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class audioBlock : MonoBehaviour
{
    
    public GameObject gameObject;
    public AudioSource audioSource;
    public Material materialBefore;
    public Material materialDuring;
    public Material materialNone;

    public float raycastDistance = 1.0f;
    public bool activated = false;
    Vector3 blockSize;

    void Start()
    {

        blockSize = transform.localScale;
        blockSize.x += audioSource.clip.length * 0.2f;
        transform.localScale = blockSize;

    }

    void Update()
    {
        if (audioSource.clip == null)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialNone;
            
       
        }

        else if (audioSource.isPlaying)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialDuring;
            

        }

        else
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialBefore;
            
        }

        if (activated && !audioSource.isPlaying)
        {
            shootRaycastForNext();
        }


    }


    public void shootRaycastForNext()
    {

        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.right), out hit))
            hit.transform.SendMessage("triggered");

        activated = false;
    }


    void triggered()
    {
        activated = true;
        audioSource.Play(0);
        Renderer rend = gameObject.GetComponent<Renderer>();
        rend.material = materialNone;
        
    }

    

    

}