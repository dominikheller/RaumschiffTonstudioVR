using UnityEngine;

public class Knob : MonoBehaviour
{
    public GameObject interactableContainer;
    public GameObject knobMeshRepresentation;

    public string soundEffectTitle;
    public float factor = 1;

    private bool currentlyGrabbed;
    private Vector3 initialInteractableContainerPosition;

    // Start is called before the first frame update
    void Start()
    {
        currentlyGrabbed = false;
        initialInteractableContainerPosition = interactableContainer.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(currentlyGrabbed == true)
        {
            knobMeshRepresentation.transform.rotation = new Quaternion(0, interactableContainer.transform.rotation.y, 0, interactableContainer.transform.rotation.w);
            GetComponent<SoundEffectController>().setSoundEffectLevel(soundEffectTitle, knobMeshRepresentation.transform.rotation.y, factor);
            Debug.Log(knobMeshRepresentation.transform.rotation.y);
        }

        if(currentlyGrabbed == false)
        {
            interactableContainer.transform.position = initialInteractableContainerPosition;
        }
    }

    public void setCurrentyGrabbedActive()
    {
        currentlyGrabbed = true;
    }

    public void setCurrentyGrabbedInactive()
    {
        currentlyGrabbed = false;
    }
}
