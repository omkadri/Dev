using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Activate_Trigger_Script : MonoBehaviour {

	[Header("add this component to your trigger")]
	[Header("Drag object to control from HIERARCHY")]
	public GameObject objectToActivate;
	[Header("pick animation clips for activate + deactivate")]
	public AnimationClip FirstAnimationToPlay;
	public AnimationClip SecondAnimationToPlay;
	/*[Header("how long do these clips play for?")]
	public float activateLength;
	public float deactivateLength;*/
	[Header("set button for activating object")]


	private KeyCode usekey;
	private Animation anim;
	private bool triggerActivated=false;

	private void Start(){
		anim = objectToActivate.GetComponent<Animation>();
		anim.AddClip (FirstAnimationToPlay, "activate"); 
		anim.AddClip (SecondAnimationToPlay, "deactivate");
		usekey = KeyCode.E;
	}

	// Use this for initialization
	void OnTriggerStay (Collider other) {
		if (Input.GetKey (usekey) && triggerActivated == false && anim.isPlaying == false) {
			triggerActivated = true;
			anim.Play ("activate");
		}else if (Input.GetKey (usekey) && triggerActivated == true && anim.isPlaying == false) {
			anim.Play ("deactivate");
			triggerActivated = false;
		}
	}
	
	// Update is called once per frame
	void Update () {
	}
}
