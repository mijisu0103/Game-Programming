using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WrongAnswer : MonoBehaviour
{
    [SerializeField]
    public GameObject WrongPanel;

    [SerializeField]
    public GameObject Player;
    void OnCollisionEnter(Collision collision)
    {
        WrongPanel.SetActive(false);


        if (collision.gameObject.name == "Player")
        {
            WrongPanel.SetActive(true);
            Destroy(WrongPanel, 2);
            transform.Translate(new Vector3(0f, -100f, 0f));
            Destroy(gameObject);
        }
        
    }
}
