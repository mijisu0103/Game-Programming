using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour
{
    public float Speed = 3;
    // Get the missile.
    public GameObject bullet;
    // Missile position 1
    public Transform ms;
    // Missile position 2
    public Transform ms2;
    // Missile firing interval
    public float Delay = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        // Invoke: Call the function I want to call every set interval.
        Invoke("CreateBullet", Delay);
    }

    void CreateBullet()
    {
        // Instantiate the missile at the firing positions, with no rotation
        Instantiate(bullet, ms.position, Quaternion.identity);
        Instantiate(bullet, ms2.position, Quaternion.identity);
        Invoke("CreateBullet", Delay);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.down * Speed * Time.deltaTime);
    }
}
