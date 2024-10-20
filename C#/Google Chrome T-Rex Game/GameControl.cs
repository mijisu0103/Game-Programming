using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameControl : MonoBehaviour
{
    public static GameControl instance = null;

    [SerializeField]
    GameObject restartButton;
    [SerializeField]
    Text highScoreText;
    [SerializeField]
    Text yourScoreText;
    [SerializeField]
    GameObject[] obstacles;
    [SerializeField]
    Transform spawnPoint;

    [SerializeField]
    float spawnRate = 2f;
    float nextSpawn;

    [SerializeField]
    float timeToBoost = 5f;
    float nextBoost;

    int highScore = 0, yourScore = 0;

    public static bool gameStopped;
  
    float nextScoreIncrease = 0f;


    void Start()
    {
        if (instance == null)
            instance = this;
        else if (instance != this)
            Destroy(gameObject);

        restartButton.SetActive(false);
        yourScore = 0;
        gameStopped = false;
        Time.timeScale = 1f;
        highScore = PlayerPrefs.GetInt("highScore");
        nextSpawn = Time.time + spawnRate;
        nextBoost = Time.unscaledTime + timeToBoost;

       
    }
    void Update()
    {
        if (!gameStopped)
            IncreaseYourScore();

        highScoreText.text = "High Score: " + highScore;
        yourScoreText.text = "Your Score: " + yourScore;

        if (Time.time > nextSpawn)
           SpawnObstacle();

        if (Time.unscaledTime > nextBoost && !gameStopped)
            BoostTime();
    }

    public void DinoHit()
    {
        if (yourScore > highScore)
            PlayerPrefs.SetInt("highScore", yourScore);
        Time.timeScale = 0;
        gameStopped = true;
        restartButton.SetActive(true);
    }

    void SpawnObstacle()
    {
        nextSpawn = Time.time + spawnRate;
        int randomObstacle = Random.Range(0, 3);
        print("ran" + randomObstacle);
        Instantiate(obstacles[0], spawnPoint.position, Quaternion.identity);
    }

   void BoostTime()
    {
        nextBoost = Time.unscaledTime + timeToBoost;
        Time.timeScale += 0.25f;
    }

    void IncreaseYourScore()
    {
        if (Time.unscaledTime > nextScoreIncrease)
        {
            yourScore += 1;
            nextScoreIncrease = Time.unscaledTime + 1;
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene("Game");
    }


}
