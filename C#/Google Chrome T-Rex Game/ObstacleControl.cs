using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleControl : MonoBehaviour
{
   public float movespeed = -5f;

    // Update is called once per frame
    void Update()
    {
        if (GameControl.gameStopped != true)
        {
            transform.position = new Vector2(transform.position.x + movespeed * Time.deltaTime, transform.position.y);

        }
        if (transform.position.x < -11f)
            Destroy(gameObject);
    }
     void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name.Equals("Player"))
        {
            Debug.Log("�浹");
            GameControl.instance.DinoHit();
        }
         
    }
}
