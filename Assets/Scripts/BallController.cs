using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour {

	Vector3 startposition;
	Rigidbody2D rb;

	// Use this for initialization
	void Start () {
		startposition = transform.position;
		rb = GetComponent<Rigidbody2D> ();
	}

	public void Reset() {
		transform.position = startposition;
		rb.velocity = Vector2.zero;
		rb.angularVelocity = 0;
	}
}
