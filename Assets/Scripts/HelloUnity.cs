using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TTTRtcEngine;

public class HelloUnity : MonoBehaviour {
	private string AppID = "a967ac491e3acf92eed5e1b5ba641ab7";
	private uint MyUserID = (uint)Random.Range (1, 1000000);

	public IRtcEngineVoice RtcEngine;
	public readonly Dictionary<GameObject, uint> UsersDictionary = new Dictionary<GameObject, uint> ();

	public HelloUnity() {
		RtcEngine = null;
	}

	public IRtcEngineVoice loadEngine() {
		if (!ReferenceEquals(RtcEngine, null)) {
			return RtcEngine;
		}

		// 初始化TTTRtcEngine
		RtcEngine = IRtcEngineVoice.GetEngine (AppID);

		return RtcEngine;
	}

	public void unloadEngine() {
		if (!ReferenceEquals(RtcEngine, null)) {
			IRtcEngineVoice.Destroy ();
			RtcEngine = null;
		}
	}

	public void joinChannel(string channel) {
		if (ReferenceEquals(RtcEngine, null))
			return;
		
		RtcEngine.OnReportAuidoLevel = OnReportAuidoLevel;
		RtcEngine.OnUserJoined = OnUserJoined;
		RtcEngine.OnUserOffline = OnUserOffline;

		RtcEngine.JoinChannel(channel, MyUserID);
	}

	public void leaveChannel() {
		UsersDictionary.Clear ();

		if (!ReferenceEquals(RtcEngine, null)) {
			RtcEngine.LeaveChannel();
		}
	}

	private GameObject getAvailableGameObject() {
		foreach (KeyValuePair<GameObject, uint> kvp in UsersDictionary) {
			if (kvp.Value == 0) {
				return kvp.Key;
			}
		}
		return null;
	}

	private GameObject getGameObjectWithUserID(uint uid) {
		foreach (KeyValuePair<GameObject, uint> kvp in UsersDictionary) {
			if (kvp.Value == uid) {
				return kvp.Key;
			}
		}
		return null;
	}

	public void OnHelloUnitySceneLoaded() {
		UsersDictionary.Clear ();
		UsersDictionary.Add (GameObject.Find ("Cylinder"), MyUserID);
		UsersDictionary.Add (GameObject.Find ("Cube1"), 0);
		UsersDictionary.Add (GameObject.Find ("Cube2"), 0);

		Animate vs = GameObject.Find ("Cylinder").GetComponent<Animate> ();
		vs.isOnLine = true;
	}

	private void OnUserJoined(uint uid, int elapsed) {
		GameObject go = getAvailableGameObject ();
		if (ReferenceEquals(go, null)) {
			return;
		}
		UsersDictionary [go] = uid;
		Animate vs = go.GetComponent<Animate> ();
		vs.isOnLine = true;
	}

	private void OnUserOffline(uint uid, USER_OFFLINE_REASON reason) {
		GameObject go = getGameObjectWithUserID(uid);
		if (!ReferenceEquals (go, null)) {
			Animate vs = go.GetComponent<Animate> ();
			vs.isOnLine = false;
			UsersDictionary [go] = 0;
		}
	}

	private void OnReportAuidoLevel(uint uid, int audioLevel) {
		GameObject go = getGameObjectWithUserID(uid);
		if (!ReferenceEquals (go, null)) {
			Animate vs = go.GetComponent<Animate> ();
			if (audioLevel > 1) {
				vs.speak = true;
			} else {
				vs.speak = false;
			}
		}
	}
}
