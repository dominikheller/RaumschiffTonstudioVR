using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cassettePlayer : MonoBehaviour
{
    private GameObject currentCassette;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void cassetteSnapped(GameObject snappedCassette)
    {
        currentCassette = snappedCassette;
        currentCassette.GetComponent<cassette>().setMusic();

    }

    public void cassetteUnsnapped()
    {
        currentCassette.GetComponent<cassette>().stopAnimation();
        currentCassette.GetComponent<cassette>().pauseMusic();
        currentCassette = null;
    }

    public void cassettePlay()
    {

        currentCassette.GetComponent<cassette>().playAnimation();
        currentCassette.GetComponent<cassette>().playMusic();
    }

    public void cassettePause()
    {

        currentCassette.GetComponent<cassette>().stopAnimation();
        currentCassette.GetComponent<cassette>().pauseMusic();

    }

    public void cassetteStop()
    {

        currentCassette.GetComponent<cassette>().stopAnimation();
        currentCassette.GetComponent<cassette>().stopMusic();

    }

}
