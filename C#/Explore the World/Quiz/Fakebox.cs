using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fakebox : MonoBehaviour
{
    [SerializeField]
    public GameObject FakeboxPanel;

    [SerializeField]
    public GameObject Player;
    void OnCollisionEnter(Collision collision)
    {
        FakeboxPanel.SetActive(false);


        if (collision.gameObject.name == "Player")
        {
            FakeboxPanel.SetActive(true);
            Destroy(FakeboxPanel, 3);
            transform.Translate(new Vector3(0f, -100f, 0f));
            Destroy(gameObject);
        }

    }
}
