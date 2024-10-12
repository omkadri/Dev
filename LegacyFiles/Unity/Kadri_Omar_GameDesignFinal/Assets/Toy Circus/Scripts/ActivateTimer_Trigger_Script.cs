using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateTimer_Trigger_Script : MonoBehaviour {

	[Header("add this component to your trigger")]
	[Header("Drag object to control from HIERARCHY")]
	public GameObject objectOnTimer;
	[Header("pick animation clips for timer start+end")]
	public AnimationClip FirstAnimationPlays;
	public AnimationClip SecondAnimationPlays;
	[Header("set timer until end")]
	public float timer = 3;
	[Header("set button for start timer ")]

	private KeyCode usekey;
	private Animation anim;
	private float eventTime;
	private bool triggerActivated=false;

	private void Awake(){
		eventTime = float.PositiveInfinity;
	}

	private void Start(){
		anim = objectOnTimer.GetComponent<Animation>();
		anim.AddClip (FirstAnimationPlays, "passable"); 
		anim.AddClip (SecondAnimationPlays, "impassable");
		usekey = KeyCode.E;
	}
		
	private void OnTriggerStay (Collider other) {
		if (Input.GetKey (usekey) && triggerActivated == false) {
			triggerActivated = true;
			anim.Play ("passable");	
			StartTimer (timer);
 		}
	}

	private void Update (){
		if (Time.time >= eventTime) {
			anim.Play ("impassable");
			eventTime = float.PositiveInfinity;
			triggerActivated = false;
		}
		Debug.Log (eventTime);
	}

	private void StartTimer (float delay){
		eventTime = Time.time + delay;
	}
}

/* NOTES:
 */

