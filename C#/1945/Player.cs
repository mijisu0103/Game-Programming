using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float moveSpeed = 5;
    // Missile
    public GameObject bullet;
    public Transform pos;
    Animator ani;

    void Start()
    {
        ani = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        float moveX = Input.GetAxis("Horizontal");
        float moveY = Input.GetAxis("Vertical");

        if (moveX >= 0.5f)
        {
            ani.SetBool("right", true);
        }
        else
        {
            ani.SetBool("right", false);
        }

        if (moveX <= -0.5f)
        {
            ani.SetBool("left", true);
        }
        else
        {
            ani.SetBool("left", false);
        }

        if (moveY >= 0.5f)
        {
            ani.SetBool("up", true);
        }
        else
        {
            ani.SetBool("up", false);
        }

        transform.Translate(moveX * moveSpeed * Time.deltaTime,
                           moveY * moveSpeed * Time.deltaTime, 0);
        // When the space bar is pressed
        if (Input.GetKeyDown(KeyCode.Space))
        {
            // Instantiate the missile prefab
            Instantiate(bullet, pos.position, Quaternion.identity);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        // Collision with a monster's missile
        if (collision.tag == "MBullet")
        {
            // Destroy the monster's missile
            Destroy(collision.gameObject);
            // Player dies
            Destroy(gameObject);
        }
    }
}
