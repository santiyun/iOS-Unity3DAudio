﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour {

	// Use this for initialization
	void Start () {
		//print(
	}
	
	// Update is called once per frame
	void Update () {
		transform.Rotate (new Vector3 (0, 1, 0));
	}
}
