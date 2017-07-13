using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoalController : MonoBehaviour {

	public int team;

	void OnCollisionEnter2D(Collision2D col) {
		if(col.gameObject.name == "Ball") {
			GameObject.Find ("GameController").GetComponent<GameController> ().Score (team);
		}
	}
}
