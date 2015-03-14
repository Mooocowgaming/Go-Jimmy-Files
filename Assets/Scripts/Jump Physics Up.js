#pragma strict

function Start () {

}

function Update () {
	if (Input.GetKeyDown ("space"))
		GetComponent.<Rigidbody2D>().AddForce(Vector2(0, 500));
}