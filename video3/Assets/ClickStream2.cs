using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class ClickStream2 : MonoBehaviour, IInputClickHandler
{
    public void OnInputClicked(InputClickedEventData eventData)
    {
        Debug.Log("CLICK STREAM 2");
        GameObject button1 = GameObject.Find("Button1");
        GameObject button2 = GameObject.Find("Button2");
        GameObject MyObject_stream1 = Resources.Load("StreamView1") as GameObject;
        if (MyObject_stream1 != null)
        {
            GameObject go = Instantiate(MyObject_stream1) as GameObject;
            go.AddComponent<SocketReceiveStream>();
            go.GetComponent<SocketReceiveStream>().stream_name = "stream2";
        }

        GameObject MyObject_stream2 = Resources.Load("StreamView2") as GameObject;
        if (MyObject_stream2 != null)
        {
            GameObject go2 = Instantiate(MyObject_stream2) as GameObject;
            go2.AddComponent<SocketSendStream>();
            go2.GetComponent<SocketSendStream>().stream_name = "stream1";
        }

        Destroy(button1);
        Destroy(button2);
    }

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
