using System;
using UnityEngine;

public class Knob : MonoBehaviour
{
    public GameObject interactableContainer;
    public GameObject knobMeshRepresentation;

    private bool currentlyGrabbed;
    private Vector3 initialInteractableContainerPosition;

    public float audioEffectLevel;

    // Start is called before the first frame update
    void Start()
    {
        currentlyGrabbed = false;
        initialInteractableContainerPosition = interactableContainer.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (currentlyGrabbed == true)
        {
            if(interactableContainer.transform.rotation.eulerAngles.y >= 0 && interactableContainer.transform.rotation.eulerAngles.y <= 180)
            {
                knobMeshRepresentation.transform.rotation = new Quaternion(0, interactableContainer.transform.rotation.y, 0, interactableContainer.transform.rotation.w);
                audioEffectLevel = Mathf.Abs(knobMeshRepresentation.transform.rotation.y);
                Debug.Log(audioEffectLevel);
            }
        }

        if(currentlyGrabbed == false)
        {
            interactableContainer.transform.position = initialInteractableContainerPosition;
            interactableContainer.transform.eulerAngles = new Vector3(0, Mathf.Abs(interactableContainer.transform.rotation.eulerAngles.y), 0);
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
