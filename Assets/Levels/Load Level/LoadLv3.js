#pragma strict
function OnCollisionEnter2D(info: Collision2D) {
	print(info.gameObject.name);
	Application.LoadLevel("level3");
}