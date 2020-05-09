using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bowlingball : MonoBehaviour

{

    Vector3 ballStartingLocation;
    Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        ballStartingLocation = transform.position;
        rb = this.gameObject.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void resetBowlingBall()
    {

        this.gameObject.transform.position = ballStartingLocation;
        this.gameObject.transform.rotation = Quaternion.identity;
        rb.velocity = new Vector3(0.0f, 0.0f, 0.0f);
        rb.angularVelocity = new Vector3(0.0f, 0.0f, 0.0f);

    }
}
