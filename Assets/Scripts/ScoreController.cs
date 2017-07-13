using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreController : MonoBehaviour {

	int score = 0;
	Text text;

	void Start() {
		text = GetComponent<Text> ();
	}

	public void AddOne() {
		score++;
	}

	void Update() {
		text.text = score.ToString ();
	}
}
