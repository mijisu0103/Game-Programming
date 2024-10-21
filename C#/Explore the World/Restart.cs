using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Restart : MonoBehaviour
{
    public GameObject restart;
    
    // Start is called before the first frame update
    void Start()
    {
        restart.SetActive(false);
    }

    public void restartb()
    {
        SceneManager.LoadScene("Game");
    }
}
