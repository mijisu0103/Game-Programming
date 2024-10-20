using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player : MonoBehaviour
{
    Animator anim;
    Rigidbody2D rb;

    [SerializeField]
    float jumpforce = 700f;
    float upOrDown;

    float forceGravity = 10f;
    private void FixedUpdate()
    {
        rb.AddForce(Vector3.down * forceGravity);
    }

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
    }

    private void Update()
    {
        if(GameControl.gameStopped != true)
        {
            ////�����Ѵ�.
            if (Input.GetKeyDown(KeyCode.UpArrow) && rb.velocity.y == 0 || Input.GetKeyDown(KeyCode.Space) && rb.velocity.y == 0)
            {
                anim.SetBool("jump", true);
                rb.AddForce(transform.up * jumpforce);
                FixedUpdate();
            }
            else
            {
                anim.SetBool("jump", false);
            }

            if (Input.GetKey(KeyCode.DownArrow))
            {
                anim.SetBool("bending", true);
            }
            if (Input.GetKeyUp(KeyCode.DownArrow))
            {
                anim.SetBool("bending", false);
            }
        }


    }




}
