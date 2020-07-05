using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    private GameObject player;

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }

    public void changeSceneTo(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void initChangeSceneAdditive(string sceneName)
    {
        StartCoroutine(changeSceneAdditive(sceneName));
    }

    public void initUnloadScene(string sceneName)
    {
        StartCoroutine(unloadScene(sceneName));
    }

    public void setGameObjectsStatus(GameObject[] objects, bool status)
    {
        for (int i = 0; i < objects.Length; i++)
        {
            objects[i].gameObject.SetActive(status);
        }
    }

    IEnumerator changeSceneAdditive(string sceneName)
    {
        player.GetComponent<TriggerTransition>().triggerTransition = true;
        yield return new WaitForSeconds(1);
        gameObject.GetComponent<ChangeSkybox>().ChangeTheSkybox();
        Scene activeScene = SceneManager.GetActiveScene();
        setGameObjectsStatus(activeScene.GetRootGameObjects(), false);
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
    }

    IEnumerator unloadScene(string sceneName)
    {
        player.GetComponent<TriggerTransition>().triggerTransition = true;
        yield return new WaitForSeconds(1);
        gameObject.GetComponent<ChangeSkybox>().ChangeTheSkybox();
        Scene rootScene = SceneManager.GetSceneAt(0);
        SceneManager.SetActiveScene(rootScene);
        setGameObjectsStatus(rootScene.GetRootGameObjects(), true);
        SceneManager.UnloadSceneAsync(sceneName);
    }
}

