GameObject target; // Load the player GameObject
Vector2 dir;    // I will find the direction of the vector.
Vector2 dirNo;  // I will normalize the vector. It's a unit vector.
public float Speed = 3;

// Start is called before the first frame update
void Start()
{
    // Homing step 1: not following perfectly, but finding the direction once
    // A - B: This will give a vector pointing from A to B.

    target = GameObject.Find("Player");

    if (target == null)
    {
        return;
    }

    dir = target.transform.position - transform.position;
    dirNo = dir.normalized; // Create a vector with a length of 1.
                             // This only retrieves the direction.

    Destroy(gameObject, 7); // Destroy after 7 seconds after creation
}

// Update is called once per frame
void Update()
{
    transform.Translate(dirNo * Speed * Time.deltaTime);
}
