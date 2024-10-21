using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Quiz : MonoBehaviour
{
    [SerializeField]
    public GameObject QuizPanel;

    [SerializeField]
    public GameObject Player;

    void OnCollisionEnter(Collision collision)
    {
        QuizPanel.SetActive(false);


        if (collision.gameObject.name == "Player")
        {
            QuizPanel.SetActive(true);
            Time.timeScale = 0;
        }

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            QuizPanel.SetActive(false);
            Time.timeScale = 1;
        }
    }
}

