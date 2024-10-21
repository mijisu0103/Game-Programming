using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameStart : MonoBehaviour
{
   public void gamestart()
    {
        SceneManager.LoadScene("Game");
    }

   public void Help()
    {
        SceneManager.LoadScene("Introduction");
    }

    public void exit()
    {
        Application.Quit();
    }
}
