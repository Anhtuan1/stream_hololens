using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net.Sockets;
using System.Net;
using SocketIO;

public class SocketTest : MonoBehaviour {

    private SocketIOComponent socket;

    // Use this for initialization

    void Start () {
        GameObject go = GameObject.Find("SocketIO");
        socket = go.GetComponent<SocketIOComponent>();
        Debug.Log("123");
        socket.On("stream", TestOpen);
        
        
    }

    private IEnumerator BeepBoop()
    {

        yield return new WaitForSeconds(1);
        socket.Emit("beep");

    }

    public void TestOpen(SocketIOEvent e)
    {
        Debug.Log("456");
        Debug.Log("[SocketIO] Open received: " + e.name + " " + e.data);
    }

    // Update is called once per frame
    void Update () {
		
	}
}
