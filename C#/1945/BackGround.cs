using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGround : MonoBehaviour
{
    //public float scroll = 1;

    //// Update is called once per frame
    //void Update()
    //{
    //    transform.Translate(0, -scroll * Time.deltaTime, 0);

    //    if(transform.position.y <-85)
    //    {
    //        transform.position = new Vector3(0, 85, 0);
    //    }

    //}

    public float scrollSpeed = 0.01f;
    Material myMaterial;
    void Start()
    {
        myMaterial = GetComponent<Renderer>().material;
    }
    void Update()
    {
        float newOffsetY = myMaterial.mainTextureOffset.y
            + scrollSpeed * Time.deltaTime;

        Vector2 newOffset = new Vector2(0, newOffsetY);
        myMaterial.mainTextureOffset = newOffset;
    }


}
