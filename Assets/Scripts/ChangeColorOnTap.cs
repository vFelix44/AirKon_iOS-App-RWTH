using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ChangeColorOnTap : MonoBehaviour
    {
    private Renderer objectRenderer;
private Color originalColor;
private Color transparentGray = new Color(0.5f, 0.5f, 0.5f, 0.5f);
private AudioSource audioSource;

void Start()
{
      objectRenderer = GetComponent<Renderer>();
    if (objectRenderer != null)
    {
              originalColor = objectRenderer.material.color;
    }

    audioSource = GetComponent<AudioSource>();
    if (audioSource == null)
    {
        Debug.LogError("Keine AudioSource-Komponente gefunden! Bitte füge eine AudioSource-Komponente hinzu.");
    }
}

void Update()
{
       if (Input.touchCount > 0)
    {
        Touch touch = Input.GetTouch(0);

        if (touch.phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(touch.position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                if (hit.transform == transform)
                {
                    ChangeColor();
                    PlaySound();
                }
            }
        }
    }
}

void ChangeColor()
{
    if (objectRenderer != null)
    {
        objectRenderer.material.color = transparentGray;
    }
}

void PlaySound()
{
    if (audioSource != null)
    {
        audioSource.Play();
    }
}
}
