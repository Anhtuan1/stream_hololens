using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using SocketIO;
using System.IO;
using System;

public class SocketSendStream : MonoBehaviour {

    static WebCamTexture backCam;
    private SocketIOComponent socket;
    private Camera _camera;
    private Texture2D _screenShot;
    public string stream_name = "stream2";

    // Use this for initialization
    void Start () {
        GameObject go = GameObject.Find("SocketIO");
        socket = go.GetComponent<SocketIOComponent>();
        Debug.Log("Connected");
        if (backCam == null)
            backCam = new WebCamTexture(230, 200);

        GetComponent<Renderer>().material.mainTexture = backCam;

        if (!backCam.isPlaying)
            backCam.Play();        
        StartCoroutine("UpdateSocketData");
    }


    private IEnumerator UpdateSocketData()
    {
        yield return new WaitForEndOfFrame();
        Texture2D snap = new Texture2D(backCam.width, backCam.height);
        // snap.ReadPixels(new Rect(0, 0, backCam.width, backCam.height), 0, 0);

        snap.SetPixels(backCam.GetPixels());
        snap.Apply();

        ////Encode to a PNG
        byte[] bytes = snap.EncodeToPNG();

        string enc = "data:image/jpeg;base64," + Convert.ToBase64String(bytes);

        Dictionary<string, string> data = new Dictionary<string, string>();
        data["data"] = enc;
        //Debug.Log("Run");
        socket.Emit(stream_name, new JSONObject(data));
    }


    // Update is called once per frame
    void Update () {
        StartCoroutine("UpdateSocketData");
    }
}
