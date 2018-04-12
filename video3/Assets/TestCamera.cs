using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using SocketIO;
using System.IO;
using System;
using System.Runtime.Serialization.Formatters.Binary;

public class TestCamera : MonoBehaviour
{
       
    static WebCamTexture backCam;
    private SocketIOComponent socket;
    private Camera _camera;

    private Texture2D _screenShot;

    // Use this for initialization
    void Start()
    {
        GameObject go = GameObject.Find("SocketIO");
        socket = go.GetComponent<SocketIOComponent>();
        Debug.Log("Connected");
        // Application.runInBackground = true;
        // StartCoroutine(playVideo());
        if (backCam == null)
            backCam = new WebCamTexture(230, 200);

        GetComponent<Renderer>().material.mainTexture = backCam;

        if (!backCam.isPlaying)
            backCam.Play();


        //Debug.Log("Send something1");
        //StartCoroutine("BeepBoop");
        StartCoroutine("BeepBoop");
    }

    private IEnumerator BeepBoop()
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
        socket.Emit("stream2", new JSONObject(data));
    }

    void Update()
    {

        StartCoroutine("BeepBoop");

    }

   

}
