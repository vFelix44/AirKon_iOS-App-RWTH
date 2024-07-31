using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.EventSystems;
using UnityEngine.UI;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlaceModel : MonoBehaviour
{
    public GameObject gameObjectToInstantiate;

    private GameObject spawnedObject;
    private ARRaycastManager _arRaycastManager;

    static List<ARRaycastHit> hits = new List<ARRaycastHit>();

      private readonly Color greenColor = new Color32(180, 197, 29, 255); // #B4C51D

    void Awake()
    {
        _arRaycastManager = GetComponent<ARRaycastManager>();
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;

            float dpi = 326;
            float cmToPixels = 5 * (dpi / 2.54f);
            float bottomInactiveArea = cmToPixels;

            if (touchPosition.y >= Screen.height - bottomInactiveArea)
            {
                touchPosition = default;
                return false;
            }

            return true;
        }

        touchPosition = default;
        return false;
    }

    bool IsTouchOverUIObject(Vector2 touchPosition)
    {
        PointerEventData pointerData = new PointerEventData(EventSystem.current) { position = touchPosition };
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerData, results);

        foreach (var result in results)
        {
                    Image image = result.gameObject.GetComponent<Image>();
            if (image != null)
            {
                Color color = image.color;
                if (ColorApproximatelyEqual(color, greenColor))
                {
                    return true;
                }
            }
        }
        return results.Count > 0;
    }

    bool IsTouchOver3DObject(Vector2 touchPosition)
    {
        Ray ray = Camera.main.ScreenPointToRay(touchPosition);
        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            Renderer renderer = hit.transform.GetComponent<Renderer>();
            if (renderer != null)
            {
                Material material = renderer.material;
                if (material != null && material.HasProperty("_Color"))
                {
                    Color color = material.color;
                                     return true;
                }
            }
        }
        return false;
    }

    // Methode zum Vergleichen von Farben mit einer gewissen Toleranz
    bool ColorApproximatelyEqual(Color color1, Color color2, float tolerance = 0.1f)
    {
        return Mathf.Abs(color1.r - color2.r) < tolerance &&
               Mathf.Abs(color1.g - color2.g) < tolerance &&
               Mathf.Abs(color1.b - color2.b) < tolerance;
    }

    void Update()
    {
        if (!TryGetTouchPosition(out Vector2 touchPosition))
            return;

        if (IsTouchOverUIObject(touchPosition))
            return;

        if (IsTouchOver3DObject(touchPosition))
            return;

        if (_arRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = hits[0].pose;

            if (spawnedObject == null)
            {
                spawnedObject = Instantiate(gameObjectToInstantiate, hitPose.position, hitPose.rotation);
            }
            else
            {
                spawnedObject.transform.position = hitPose.position;
            }
        }
    }
}