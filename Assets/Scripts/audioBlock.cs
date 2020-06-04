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

    public GameObject progressBar;
    private float timer;
    private float unitLength;
    private float unitTime;

    void Start()
    {
        blockSize = transform.localScale;
        blockSize.x += audioSource.clip.length * 0.2f;
        transform.localScale = blockSize;

        unitTime = audioSource.clip.length / 100;
        unitLength = gameObject.transform.localScale.z / 100;

        Debug.Log("audioLength: " + audioSource.clip.length);
        Debug.Log("gameObjectLength: " + gameObject.transform.localScale.z);
        Debug.Log("unitTime: " + unitTime);
        Debug.Log("unitLength: " + unitLength);
    }

    void Update()
    {
        timer += Time.deltaTime;

        if (audioSource.clip == null)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialNone;
        }

        else if (audioSource.isPlaying)
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialDuring;
        } else
        {
            Renderer rend = gameObject.GetComponent<Renderer>();
            rend.material = materialBefore;   
        }

        if (activated && !audioSource.isPlaying)
        {
            shootRaycastForNext();
        }

        if(activated && timer >= unitTime && progressBar.transform.localScale.z <= gameObject.transform.localScale.z)
        {
            if (progressBar != null)
            {
                progressBar.transform.localScale += new Vector3(0, 0, unitLength);
            }
        }
    }


    public void shootRaycastForNext()
    {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.right), out hit))
        {
            hit.transform.SendMessage("triggered");
        }

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