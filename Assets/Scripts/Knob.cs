using UnityEngine;

public class Knob : MonoBehaviour
{
    public GameObject leftControllerAlias;
    public GameObject rightControllerAlias;
    public GameObject interactableContainer;
    public GameObject knobMeshRepresentation;

    private bool currentlyGrabbed;
    private Vector3 initialInteractableContainerPosition;
    private string handSide;

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
            switch(handSide)
            {
                case "rightHandSide":
                    knobMeshRepresentation.transform.rotation = new Quaternion(0, interactableContainer.transform.rotation.y, 0, interactableContainer.transform.rotation.w);
                    break;
                case "leftHandSide":
                    knobMeshRepresentation.transform.rotation = new Quaternion(0, interactableContainer.transform.rotation.y, 0, interactableContainer.transform.rotation.w);
                    break;
            }
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

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "rightControllerAlias")
        {
            handSide = "rightHandSide";
        }
        if (other.tag == "leftControllerAlias")
        {
            handSide = "leftHandSide";
        }
    }
}
