using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RightAnswer : MonoBehaviour
{
    [SerializeField]
    public GameObject RightPanel;

    [SerializeField]
    public GameObject Player;

    void OnCollisionEnter(Collision collision)
    {
        RightPanel.SetActive(false);


        if (collision.gameObject.name == "Player")
        {
            RightPanel.SetActive(true);
            Time.timeScale = 0;
        }

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            RightPanel.SetActive(false);
            Time.timeScale = 1;
        }
    }
}
