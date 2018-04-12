using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HoloCamera : MonoBehaviour {
    WebCamTexture webcam;
    public RawImage background;
    // Use this for initialization
    void Start () {
        webcam = new WebCamTexture();
        webcam.Play();
        Debug.LogFormat("WEBCAM {0} {1} x {2}", webcam.deviceName, webcam.width, webcam.height);
        background.texture = webcam;

    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
