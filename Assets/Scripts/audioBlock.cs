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

    void Start()
    {
        
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


   

        RaycastHit hit;
        if (Physics.Raycast(transform.position, Vector3.right, out hit))
            hit.transform.SendMessage("triggered");


    }

    void triggered()
    {
        audioSource.Play(0);
        Renderer rend = gameObject.GetComponent<Renderer>();
        rend.material = materialNone;
    }

    

    

}