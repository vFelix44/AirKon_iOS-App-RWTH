using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ChangeColorOnOverlap : MonoBehaviour
{
    public string parentBTag = "ParentB";
    public GameObject childB1;
    public Color overlapColor = Color.red;
    public float positionTolerance = 0.05f;

    private GameObject parentB;

    private void Start()
    {
        parentB = GameObject.FindGameObjectWithTag(parentBTag);
        if (parentB == null)
        {
            Debug.LogError("Parent B mit Tag '" + parentBTag + "' nicht gefunden");
        }
    }

    private void OnTriggerStay(Collider other)
    {
               if (other.gameObject == childB1 && parentB != null)
        {
                      if (Vector3.Distance(transform.position, childB1.transform.position) < positionTolerance)
            {
                Debug.Log("ChildA1 befindet sich in ChildB1");
              
                Renderer renderer = parentB.GetComponent<Renderer>();
                if (renderer != null)
                {
                    renderer.material.color = overlapColor;
                    Debug.Log("Farbe von Parent B geändert zu " + overlapColor);
                }
                else
                {
                    Debug.LogError("Renderer von Parent B nicht gefunden");
                }
            }
        }
    }
}