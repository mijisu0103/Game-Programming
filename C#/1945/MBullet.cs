using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MBullet : MonoBehaviour
{
    public float Speed = 3f;
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, 5);//생성되고 5초후 삭제
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.down * Speed * Time.deltaTime);
    }




}
