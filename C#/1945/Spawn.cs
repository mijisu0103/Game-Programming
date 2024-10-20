using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{
    public float ss = -5;  // Random starting position
    public float es = 5;   // Random ending position
    public float StartTime = 3; // Delay before spawning
    public float SpawnStop = 10; // Time before stopping spawning
    public GameObject monster;  // First type of monster
    public GameObject monster2; // Second type of monster

    bool swi = true;
    bool swi2 = true;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("RandomSpawn");
        Invoke("Stop", SpawnStop); // Execute Stop function after 10 seconds
    }

    void Stop()
    {
        swi = false;
        StartCoroutine("RandomSpawn2");
    }

    IEnumerator RandomSpawn()
    {
        while (swi)
        {
            // 3 seconds delay
            yield return new WaitForSeconds(StartTime);
            // Random X coordinate
            float X = Random.Range(ss, es);
            // Vector2 position
            Vector2 r = new Vector2(X, transform.position.y);
            // Instantiate monster at random position with no rotation
            Instantiate(monster, r, Quaternion.identity);
        }
    }

    IEnumerator RandomSpawn2()
    {
        while (swi2)
        {
            // 3 seconds delay
            yield return new WaitForSeconds(StartTime);
            // Random X coordinate
            float X = Random.Range(ss, es);
            // Vector2 position
            Vector2 r = new Vector2(X, transform.position.y);
            // Instantiate monster2 at random position with no rotation
            Instantiate(monster2, r, Quaternion.identity);
        }
    }
}
