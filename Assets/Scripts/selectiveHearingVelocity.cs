using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class selectiveHearingVelocity : MonoBehaviour
{

    public Rigidbody rigidbody;
    public Vector3 velocity;
    // Start is called before the first frame update
    void Start()
    {
        rigidbody.velocity = velocity;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
