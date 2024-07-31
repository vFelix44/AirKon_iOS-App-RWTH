using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WorkStepsController : MonoBehaviour
{
       private enum WorkStep
    {
        Start,
        PlaneDetection,
        LoadModel,
        HidePlaneDetection,
        ScanBody,
        PlaceBody,
        ConfirmInstallation
    }

       public Button workButton;
      private Text buttonText;
      private WorkStep currentStep = WorkStep.Start;
        private bool isFirstRunComplete = false;

    void Start()
    {
           buttonText = workButton.GetComponentInChildren<Text>();
        UpdateButtonText();

            workButton.onClick.AddListener(OnButtonClick);
    }

    void OnButtonClick()
    {
             currentStep = NextStep(currentStep);
        UpdateButtonText();
    }

       private void UpdateButtonText()
    {
        switch (currentStep)
        {
            case WorkStep.Start:
                buttonText.text = "<b>Work Steps (Start)</b>";
                break;
            case WorkStep.PlaneDetection:
                buttonText.text = "Please click on <i>Plane Detection</i> on the left Button";
                break;
            case WorkStep.LoadModel:
                buttonText.text = "Please load & reference the model by clicking on the visualized Plane";
                break;
            case WorkStep.HidePlaneDetection:
                buttonText.text = "Please click on <i>Hide Plane Detection</i> on the left Button";
                break;
            case WorkStep.ScanBody:
                buttonText.text = "Please <b>scan</b> the <b>Hollow Body</b> with your Camera";
                break;
            case WorkStep.PlaceBody:
                buttonText.text = "Please <b>place</b> the <b>Hollow Body</b> at the visualized Place in the Model";
                break;
            case WorkStep.ConfirmInstallation:
                buttonText.text = "<b>Confirm</b> the correct Installation by clicking on the placed Hollow Body";
                break;
        }
    }

    private WorkStep NextStep(WorkStep currentStep)
    {
        switch (currentStep)
        {
            case WorkStep.Start:
                return WorkStep.PlaneDetection;
            case WorkStep.PlaneDetection:
                return WorkStep.LoadModel;
            case WorkStep.LoadModel:
                return WorkStep.HidePlaneDetection;
            case WorkStep.HidePlaneDetection:
                return WorkStep.ScanBody;
            case WorkStep.ScanBody:
                return WorkStep.PlaceBody;
            case WorkStep.PlaceBody:
                return WorkStep.ConfirmInstallation;
            case WorkStep.ConfirmInstallation:
                if (isFirstRunComplete)
                {
                    // **Wiederhole die Schritte 5 bis 7**:
                    return WorkStep.ScanBody;
                }
                else
                {
                    isFirstRunComplete = true;
                    // **Beginne die Wiederholung bei Schritt 5 nach dem ersten vollständigen Durchlauf**:
                    return WorkStep.ScanBody;
                }
            default:
                return WorkStep.Start;
        }
    }
}