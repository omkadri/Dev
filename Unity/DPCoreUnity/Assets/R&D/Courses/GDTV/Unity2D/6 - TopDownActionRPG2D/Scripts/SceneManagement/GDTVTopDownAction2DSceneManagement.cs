using UnityEngine;

public class GDTVTopDownAction2DSceneManagement : GDTVSingleton<GDTVTopDownAction2DSceneManagement>
{
    public string SceneTransitionName { get; private set; }
    

    public void SetTransitionName( string sceneTransitionName )
    {
        this.SceneTransitionName = sceneTransitionName;
    }
}
