using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ground : MonoBehaviour
{
    public float scrollspd= 1;

    //Update is called once per frame
    void Update()
    {
        scrollspd += 0.001f;
        transform.Translate(-scrollspd*Time.deltaTime, 0, 0);

        if (transform.position.x < -8f)
        {
            transform.position = new Vector3(15.12f, transform.position.y, 0);
        }

    }
}
