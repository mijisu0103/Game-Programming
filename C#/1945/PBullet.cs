using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PBullet : MonoBehaviour
{
    public float Speed = 4.0f;

    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, 5); // Destroy this object after 5 seconds
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.up * Speed * Time.deltaTime); // Move the bullet upwards
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Monster")
        {
            // Collision with the monster
            Destroy(collision.gameObject); // Destroy the monster
            Destroy(gameObject); // Destroy the bullet
        }
    }

    // When the object goes off-screen
    // private void OnBecameInvisible()
    // {
    //     // Destroy it
    //     Destroy(gameObject);
    // }
}
