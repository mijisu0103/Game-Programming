using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    public float distanceAway = 20f;
    public float distanceUp = 5f;

    //����ٴ� ��ü�� �������´�.
    public Transform follow;

    private void LateUpdate()
    {
        //ī�޶��� ��ġ�� distanceUp��ŭ ����
        //distanceAway��ŭ �տ� ��ġ��Ű��
        transform.position = follow.position + Vector3.up * distanceUp
            - Vector3.forward * distanceAway;
    }
}
