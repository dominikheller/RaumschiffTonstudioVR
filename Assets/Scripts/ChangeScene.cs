using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
   public void changeSceneTo(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void changeSceneAdditive(string sceneName)
    {
        Scene activeScene = SceneManager.GetActiveScene();
        setGameObjectsStatus(activeScene.GetRootGameObjects(), false);
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
    }

    public void unloadScene(string sceneName)
    {
        Scene rootScene = SceneManager.GetSceneAt(0);
        SceneManager.SetActiveScene(rootScene);
        setGameObjectsStatus(rootScene.GetRootGameObjects(), true);
        SceneManager.UnloadSceneAsync(sceneName);
    }

    public void setGameObjectsStatus(GameObject[] objects, bool status)
    {
        for (int i = 0; i < objects.Length; i++)
        {
            objects[i].gameObject.SetActive(status);
        }
    }
}

