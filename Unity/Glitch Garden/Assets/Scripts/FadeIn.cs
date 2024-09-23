using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeIn : MonoBehaviour {
	CanvasRenderer _canvasRenderer;
	public float FadeTime = 1.0f;
	float alpha = 1.0f;

	// Use this for initialization
	void Start () {
		_canvasRenderer = GetComponent<CanvasRenderer>();
		InvokeRepeating( "FadeInStep", 0.0f, FadeTime*0.01f );
	}
	
	// Update is called once per frame
	void FadeInStep () {
		Color c = _canvasRenderer.GetColor();
		alpha -= 0.01f;
		c.a = alpha;
		_canvasRenderer.SetColor(c);
		if ( alpha <= 0.0f )
		{
			CancelInvoke( "FadeIn" );
			Destroy( gameObject );
		}
	}
}
