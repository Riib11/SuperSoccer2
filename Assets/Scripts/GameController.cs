using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

public class GameController : MonoBehaviour {

	public GameObject player1;
	public GameObject player2;
	public GameObject ball;
	public GameObject score1;
	public GameObject score2;

	public void Update() {
		if (ball.transform.position.magnitude > 15) {
			Reset ();
		}
	}

	public void Score(int team) {
		Reset ();
		if (team == 1) { score1.GetComponent<ScoreController> ().AddOne (); }
		else { score2.GetComponent<ScoreController> ().AddOne (); }
	}

	public void Reset() {
		player1.GetComponent<Player1Controller> ().Reset ();
		player2.GetComponent<Player2Controller> ().Reset ();
		ball.GetComponent<BallController> ().Reset ();
	}
}
