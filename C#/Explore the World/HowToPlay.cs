using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HowToPlay : MonoBehaviour
{
    public void BackToMenu()
    {
        SceneManager.LoadScene("GameStartScene");
    }

    public void Introduction()
    {
        SceneManager.LoadScene("Introduction");
    }

    public void GameStart()
    {
        SceneManager.LoadScene("Game");
    }
}
