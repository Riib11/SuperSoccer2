using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player2Controller : MonoBehaviour {

	// options
	float moveSpeed = 10f;
	float boosterForce = 20f;
	float diveForce = 150f;
	float kickForce = 100f;
	int currentState = 0; // animation state
	int currentDirection = -1; // -1: left, 1: right

	// controls
	KeyCode KEY_LEFT = KeyCode.LeftArrow;
	KeyCode KEY_RIGHT = KeyCode.RightArrow;
	KeyCode KEY_UP = KeyCode.UpArrow;
	KeyCode KEY_DIVE = KeyCode.RightCommand;

	// vars
	Animator animator;
	Rigidbody2D rb;
	Vector3 startposition;

	// anim state references
	const int STATE_MOVE_LEFT = 2;
	const int STATE_MOVE_RIGHT = 1;
	const int STATE_IDLE_LEFT = 3;
	const int STATE_IDLE_RIGHT = 4;

	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody2D> ();
		startposition = transform.position;
	}

	void FixedUpdate() {

		if (Input.GetKey (KEY_LEFT)) { // move left
			currentState = STATE_MOVE_LEFT;
			currentDirection = -1;
			rb.AddForce ( new Vector2(-moveSpeed,0f) );

		} else if (Input.GetKey (KEY_RIGHT)) { // move right
			currentState = STATE_MOVE_RIGHT;
			currentDirection = 1;
			rb.AddForce ( new Vector2(moveSpeed,0f) );

		} else {
			if (currentDirection == -1) {
				currentState = STATE_IDLE_LEFT;
			} else {
				currentState = STATE_IDLE_RIGHT;
			}
		}

		animator.SetInteger ("state", currentState);

		if (Input.GetKey (KEY_UP)) {
			rb.AddForce (new Vector2 (0f, boosterForce));
		}

		if(Input.GetKeyDown(KEY_DIVE)) {
			if(rb.constraints.Equals(RigidbodyConstraints2D.FreezeRotation)) {
				rb.constraints = RigidbodyConstraints2D.None;
				float vforce = diveForce;
				if(vforce == 0) { vforce = 100f; }
				rb.AddForce (new Vector2 (diveForce * currentDirection, vforce));
			} else {
				transform.SetPositionAndRotation (transform.position, Quaternion.Euler (0f, 0f, 0f));
				rb.constraints = RigidbodyConstraints2D.FreezeRotation;
			}
		}
	}

	void OnCollisionEnter2D(Collision2D col) {
		if (col.collider.name == "Ball") {
			col.collider.gameObject.GetComponent<Rigidbody2D> ().AddForce (
				new Vector2 (rb.velocity.x * kickForce / 2, rb.velocity.magnitude * kickForce)
			);
		}
	}


	public void Reset() {
		transform.position = startposition;
		currentState = 1;
		rb.velocity = Vector2.zero;
		transform.SetPositionAndRotation (transform.position, Quaternion.Euler (0f, 0f, 0f));
		rb.constraints = RigidbodyConstraints2D.FreezeRotation;
	}

}
