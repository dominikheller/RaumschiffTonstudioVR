using UnityEngine;


public class audioBlock : MonoBehaviour
{
    public GameObject gameObject;
    public AudioSource audioSource;
    public Material materialBefore;
    public Material materialDuring;
    public Material materialNone;
    public Material pBMaterial;

    public float raycastDistance = 1.0f;
    public bool activated = false;
    Vector3 blockSize;

    public GameObject progressBarContainer;
    public GameObject progressBar;
    private float clipLength;
    private float unitLength;
    private float deltaTime = 0f;
    private float fps;

    private Vector3 initalScale;

    void Start()
    {
        blockSize = transform.localScale;
        blockSize.x += audioSource.clip.length * 0.2f;
        transform.localScale = blockSize;
        clipLength = audioSource.clip.length;
        initalScale = progressBarContainer.transform.localScale;
    }

    void Update()
    {
        deltaTime += (Time.deltaTime - deltaTime) * 0.1f;
        fps = 1.0f / deltaTime;
        unitLength = gameObject.transform.localScale.z / (fps * clipLength);

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

        if(activated && audioSource.isPlaying && progressBarContainer.transform.localScale.z <= gameObject.transform.localScale.z)
        {
            if (progressBarContainer != null)
            {
                Renderer pBRenderer = progressBar.GetComponent<Renderer>();
                pBRenderer.enabled = true;
                progressBarContainer.transform.localScale += new Vector3(0, 0, unitLength);
            }
        } else
        {
            Renderer pBRenderer = progressBar.GetComponent<Renderer>();
            pBRenderer.enabled = false;
            progressBarContainer.transform.localScale = initalScale;
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