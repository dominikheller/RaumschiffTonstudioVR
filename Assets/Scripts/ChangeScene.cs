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
        SceneManager.LoadScene(sceneName, LoadSceneMode.Additive);
    }

    public void unloadScene()
    {
        SceneManager.UnloadSceneAsync(SceneManager.GetActiveScene().name);
    }
}
