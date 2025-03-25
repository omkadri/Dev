using UnityEngine;

public class ShootEmUp2DColorChanger : MonoBehaviour
{
    public Color DefaultColor { get; set; }
    [SerializeField] Color[] colors;
    [SerializeField] SpriteRenderer fillSpriteRenderer;


    public void SetDefaultColor( Color color )
    {
        DefaultColor = color;
        SetColor( color );
    }


    public void SetColor( Color color )
    {
        fillSpriteRenderer.color = color;
    }


    public void SetRandomColor()
    {
        int randomNum = Random.Range( 0, colors.Length );
        DefaultColor = colors[randomNum];
        fillSpriteRenderer.color = DefaultColor;
    }
}