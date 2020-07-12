using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CancelSimulationYes : MonoBehaviour
{

    public GameObject player;

    public GameObject confirmPanel;
    
   

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }


    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "OtherHand")
        {
            StartCoroutine(initLevelChange());
        }
       }

    IEnumerator initLevelChange()
    {
        player.GetComponent<TriggerTransition>().triggerTransition = true;
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene("RaumschiffRedesign");
    }
}
