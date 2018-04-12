using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SocketIO;
using System;

public class SocketReceiveStream : MonoBehaviour {

    // Use this for initialization
    public Texture2D convertedBase64String;
    private SocketIOComponent socket; 
    public Transform target;
    public string stream_name = "stream1";

    void Start () {
        GameObject go = GameObject.Find("SocketIO");
        socket = go.GetComponent<SocketIOComponent>();
        // socket.On("open", TestOpen);
        socket.On(stream_name, TestBoop);
    }


    public void TestBoop(SocketIOEvent e)
    {
        convertedBase64String = new Texture2D(500, 700);        

        string iconBase64String = (e.data.GetField("data").ToString()).Substring(32, (e.data.GetField("data").ToString()).Length - 32 - 2);        
        try
        {
            byte[] decodedBytes = Convert.FromBase64String(iconBase64String);

            convertedBase64String.LoadImage(decodedBytes);

            GetComponent<Renderer>().material.mainTexture = convertedBase64String;
        }
        catch (Exception abcxyz)
        {
            Debug.Log(abcxyz.ToString());
        }       
        if (e.data == null) { return; }

        Debug.Log(
            "#####################################################" +
            "THIS: " + e.data.GetField("stream").str +
            "#####################################################"
        );
    }

    // Update is called once per frame
    void Update () {
		
	}
}
