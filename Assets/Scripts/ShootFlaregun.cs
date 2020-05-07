using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootFlaregun : MonoBehaviour
{

    public Rigidbody rigidbody;
    public float velocity;
    public GameObject payload;
    public Vector3 offset;
    //public GameObject particletrail;
    public float fuseTime;

    

    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void shoot()
    {
        // rigidbody.velocity = velocity;
       // offset = new Vector3(0.0f, 0.0f, 0.3f);

        GameObject nPayload = Instantiate(payload, transform.position + offset, transform.rotation);
       // GameObject nParticletrail = Instantiate(particletrail, transform.position + offset, transform.rotation);
        nPayload.GetComponent<SphereCollider>().isTrigger = false;
        nPayload.GetComponent<Rigidbody>().isKinematic = false;
        nPayload.GetComponent<Rigidbody>().velocity += transform.forward * velocity;
        StartCoroutine(waitForBallExplode(nPayload));
        
    
    //  var locVel = transform.InverseTransformDirection(rigidbody.velocity);
    //  locVel.z = MovSpeed;
    //  rigidbody.velocity = transform.TransformDirection(locVel);

    }

    IEnumerator waitForBallExplode(GameObject nPayload)
    {
        yield return new WaitForSeconds(fuseTime);
        explode(nPayload);

    }
 
    public void explode(GameObject nPayload)
    {
        nPayload.GetComponent<Rigidbody>().velocity = new Vector3(0.0f, 0.0f, 0.0f);
        nPayload.GetComponent<Rigidbody>().useGravity = false;
        Destroy(nPayload.GetComponent<MeshRenderer>());
        StartCoroutine(waitForKill(nPayload));
    }

    IEnumerator waitForKill(GameObject nPayload)
    {
        yield return new WaitForSeconds(8);
        Destroy(nPayload);

    }

}
