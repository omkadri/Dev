using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepOnce_Trigger_Script : MonoBehaviour {

	[Header("add this component to your trigger")]
	[Header("Drag object to control from HIERARCHY")]
	public GameObject objectToControl;
	[Header("pick animation clip for triggered")]
	public AnimationClip AnimClipToPlay;

	private Animation anim;

	void Start(){
		anim = objectToControl.GetComponent<Animation>();
		anim.AddClip (AnimClipToPlay, "triggered"); 

	}

	void OnTriggerEnter (Collider other) {
		anim.CrossFade ("triggered");
		Debug.Log ("STEPPED ON!");
	}

	void OnTriggerStay (Collider other) {
		Debug.Log ("Stepped and still into");
	}

	void OnTriggerExit (Collider other) {
	}
}

/* NOTES:
 * 
 * IF object imported (FBX) moves when animation plays, you need to do the following:
 * 1) create dummy in 3dsmax and drag your animating object under it (child)
 * 2) export to FBX
 * 3) import to Unity
 *
 *You can't attach a collider to the top object (the dummy), as it never moves with the animation. Instead:
 * 1) when object is in hierarchy, expand arrow, click on the actual child door, and add a box collider to that.
 * That will move with the door, as opposed to the dummy which stays still.
 * */
