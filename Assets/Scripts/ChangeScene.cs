using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public Animator holodeckAnim;

    private GameObject player;
    private GameObject cartridgeTriggerEvent;
    private string nextSceneTitle = "";

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        cartridgeTriggerEvent = GameObject.FindGameObjectWithTag("CartridgeTriggerEvent");
    }

    private void Update()
    {
        if (cartridgeTriggerEvent.GetComponent<SnapZoneTriggerEvent>().cardridgeTitle != "")
        {
            nextSceneTitle = cartridgeTriggerEvent.GetComponent<SnapZoneTriggerEvent>().cardridgeTitle;
        }
        else
        {
            nextSceneTitle = "";
        }
    }

    public void initLevelChange()
    {
        StartCoroutine(changeSceneTo());
    }

    IEnumerator changeSceneTo()
    {
        if (nextSceneTitle != "")
        {
            holodeckAnim.Play("holodeckAn");
            gameObject.GetComponent<AudioSource>().Play(0);
            player.GetComponent<TriggerTransition>().triggerTransition = true;
            yield return new WaitForSeconds(4);
            SceneManager.LoadScene(nextSceneTitle);
        }
    }

    public void initChangeSceneAdditive()
    {
        if(nextSceneTitle != "")
        {
            StartCoroutine(changeSceneAdditive());
        }
    }

    public void initUnloadScene()
    {
        StartCoroutine(unloadScene());
    }

    public void setGameObjectsStatus(GameObject[] objects, bool status)
    {
        for (int i = 0; i < objects.Length; i++)
        {
            objects[i].gameObject.SetActive(status);
        }
    }

    IEnumerator changeSceneAdditive()
    {
        player.GetComponent<TriggerTransition>().triggerTransition = true;
        yield return new WaitForSeconds(1);
        gameObject.GetComponent<ChangeSkybox>().ChangeTheSkybox();
        Scene activeScene = SceneManager.GetActiveScene();
        setGameObjectsStatus(activeScene.GetRootGameObjects(), false);
        SceneManager.LoadScene(nextSceneTitle, LoadSceneMode.Additive);
    }

    IEnumerator unloadScene()
    {
        player.GetComponent<TriggerTransition>().triggerTransition = true;
        yield return new WaitForSeconds(1);
        gameObject.GetComponent<ChangeSkybox>().ChangeTheSkybox();
        Scene rootScene = SceneManager.GetSceneAt(0);
        SceneManager.SetActiveScene(rootScene);
        setGameObjectsStatus(rootScene.GetRootGameObjects(), true);
        SceneManager.UnloadSceneAsync(nextSceneTitle);
    }
}

