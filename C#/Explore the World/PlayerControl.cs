using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerControl : MonoBehaviour
{
    public GameObject Restartbutton; 
    Rigidbody rigid;
    float jumpPower = 25f;
    bool isJump;
    bool IsPause;

    void Start()
    {
        Restartbutton.SetActive(false);
        rigid = GetComponent<Rigidbody>();
        isJump = false;
        IsPause = false;
        
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && !isJump)
        { //isJump�� false�� ����(1ȸ�� ����)
            isJump = true;

            rigid.AddForce(new Vector3(0, jumpPower, 0), ForceMode.Impulse);
        }

        if (Input.GetKeyDown(KeyCode.Slash))
        {

            /*�Ͻ����� Ȱ��ȭ*/
            if (IsPause == false)
            {
                Time.timeScale = 0;
                IsPause = true;
                return;
            }

            /*�Ͻ����� ��Ȱ��ȭ*/
            if (IsPause == true)
            {
                Time.timeScale = 1;
                IsPause = false;
                return;
            }

        }

        if (Input.GetKeyDown(KeyCode.R))
        {
            SceneManager.LoadScene("Game");
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SceneManager.LoadScene("GameStartScene");
        }


        if (transform.position.y < 0)
        {
            Restartbutton.SetActive(true);
        }


    }

    void FixedUpdate() //���� ������ ���������̹Ƿ� FixedUpdate��� 
    {
        float h = Input.GetAxisRaw("Horizontal"); //GetAxisRaw : 0, 1 ,-1�� ������ 
        float v = Input.GetAxisRaw("Vertical");

        rigid.AddForce(new Vector3(h, 0, v), ForceMode.Impulse);
        //ForceMode.Impulse-> ���� ���¿��� ���������� ���� �������� 

    }
    public void restartb()
    {
        SceneManager.LoadScene("Game");
    }

    void OnCollisionEnter(Collision collision)
    {
        //���� �ٴڰ� ������ jump���� ���� 
        if (collision.gameObject.name == "Floor") isJump = false;
        if (collision.gameObject.tag == "Cube") isJump = false;

        if(collision.gameObject.tag == "End")
        {
            SceneManager.LoadScene("End");
        }
    }

}
