using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapZoneTriggerEvent : MonoBehaviour
{
    public string cardridgeTitle;

    public void cartridgeSnapped(GameObject snappedCartridge)
    {
        cardridgeTitle = snappedCartridge.name;
    }

    public void cartridgeUnsnapped()
    {
        cardridgeTitle = "";
    }
}
