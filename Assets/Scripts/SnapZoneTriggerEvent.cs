using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapZoneTriggerEvent : MonoBehaviour
{
    public string cardridgeTitle;

    private void OnCollisionEnter(Collision collision)
    {
        cardridgeTitle = collision.transform.name;
        gameObject.GetComponent<BoxCollider>().size = new Vector3(0, -.5f, 0);
    }

    private void OnCollisionExit(Collision collision)
    {
        gameObject.GetComponent<BoxCollider>().size = new Vector3(0, -.5f, 9.5f);
    }
}
