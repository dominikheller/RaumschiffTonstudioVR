using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bowlingball : MonoBehaviour

{

    public Vector3 ballStartingLocation;
    public GameObject ball;
    public Rigidbody rb;

    // Start is called before the first frame update
    void Start()
    {
        
        


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void resetBowlingBall()
    {

        ball.transform.position = ballStartingLocation;
        ball.transform.rotation = Quaternion.identity;
        rb.velocity = new Vector3(0.0f, 0.0f, 0.0f);
        rb.angularVelocity = new Vector3(0.0f, 0.0f, 0.0f);

    }
}
