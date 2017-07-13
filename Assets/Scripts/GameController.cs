using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

public class GameController : MonoBehaviour {

	public void Score(int team) {
		GameObject.Find ("Player1").GetComponent<Player1Controller> ().Reset ();
		GameObject.Find ("Player2").GetComponent<Player2Controller> ().Reset ();
		GameObject.Find ("Ball").GetComponent<BallController> ().Reset ();

		GameObject.Find ("Score" + team.ToString ()).GetComponent<ScoreController> ().AddOne ();


	}
}
