using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStart : MonoBehaviour
{
     public void startGame()
    {
        SceneManager.LoadScene("Game");
        
    }

    public void help()
    {
        SceneManager.LoadScene("Help");
        
    }

    public void returnhome()
    {
        SceneManager.LoadScene("GameStart");
        
    }

    public void DevInfo()
    {
        SceneManager.LoadScene("DevInfo");
    }

    public void Update()
    {
        if (Input.GetKey(KeyCode.Return))
        {
            SceneManager.LoadScene("Game");
        }

        if (Input.GetKey(KeyCode.Backspace))
        {
            SceneManager.LoadScene("GameStart");
        }

        if (Input.GetKey(KeyCode.H))
        {
            SceneManager.LoadScene("Help");
        }

        if (Input.GetKey(KeyCode.D))
        {
            SceneManager.LoadScene("DevInfo");
        }
    }
}
