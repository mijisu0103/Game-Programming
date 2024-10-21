using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Introduction : MonoBehaviour
{
    public void BackToMenu()
    {
        SceneManager.LoadScene("GameStartScene");
    }

    public void HowToPlayThisGame()
    {
        SceneManager.LoadScene("HowToPlay");
    }
}
