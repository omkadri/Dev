using UnityEngine;

public class GDTVTopDown2DSceneManagement : GDTVSingleton<GDTVTopDown2DSceneManagement>
{
    public string SceneTransitionName { get; private set; }
    

    public void SetTransitionName( string sceneTransitionName )
    {
        this.SceneTransitionName = sceneTransitionName;
    }
}