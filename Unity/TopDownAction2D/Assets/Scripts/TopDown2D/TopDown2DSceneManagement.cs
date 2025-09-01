using UnityEngine;

public class TopDown2DSceneManagement : Singleton<TopDown2DSceneManagement>
{
    public string SceneTransitionName { get; private set; }
    

    public void SetTransitionName(string sceneTransitionName)
    {
        this.SceneTransitionName = sceneTransitionName;
    }
}