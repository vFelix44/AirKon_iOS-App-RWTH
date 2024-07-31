using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoController : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    public Button buttonVideo;  // Der Button, der immer angezeigt wird, wenn das Video nicht abgespielt wird
    public Button playButton;   // Button zum Fortsetzen des Videos
    public Button pauseButton;  // Button zum Pausieren des Videos
    public Button closeButton;  // Button zum Schließen des Video-Players

    void Start()
    {
        // VideoPlayer-Einstellungen
        videoPlayer.renderMode = VideoRenderMode.CameraNearPlane;
        videoPlayer.playOnAwake = false;

        // Button-Listener hinzufügen
        buttonVideo.onClick.AddListener(StartVideo);
        playButton.onClick.AddListener(PlayVideo);
        pauseButton.onClick.AddListener(PauseVideo);
        closeButton.onClick.AddListener(CloseVideoPlayer);

        // UI-Initialisierung
        playButton.gameObject.SetActive(false);  // Play-Button anfänglich ausblenden
        pauseButton.gameObject.SetActive(false); // Pause-Button anfänglich ausblenden
        closeButton.gameObject.SetActive(false); // Close-Button anfänglich ausblenden

        // Event-Listener für das Ende des Videos hinzufügen
        videoPlayer.loopPointReached += EndReached;
    }

    void StartVideo()
    {
        if (!videoPlayer.isPlaying)
        {
            videoPlayer.Play();
            buttonVideo.gameObject.SetActive(false); // Button-Video ausblenden
            playButton.gameObject.SetActive(true);  // Play-Button anzeigen
            pauseButton.gameObject.SetActive(true); // Pause-Button anzeigen
            closeButton.gameObject.SetActive(true); // Close-Button anzeigen
        }
    }

    void PlayVideo()
    {
        if (videoPlayer.isPaused)
        {
            videoPlayer.Play();  // Fortsetzen des Videos
        }
    }

    void PauseVideo()
    {
        if (videoPlayer.isPlaying)
        {
            videoPlayer.Pause();  // Pausieren des Videos
        }
    }

    void CloseVideoPlayer()
    {
        videoPlayer.Stop();  // Stoppen des Videos
        buttonVideo.gameObject.SetActive(true); // Button-Video wieder anzeigen
        playButton.gameObject.SetActive(false); // Play-Button ausblenden
        pauseButton.gameObject.SetActive(false); // Pause-Button ausblenden
        closeButton.gameObject.SetActive(false); // Close-Button ausblenden
    }

    void EndReached(VideoPlayer vp)
    {
        CloseVideoPlayer(); // VideoPlayer schließen, wenn das Video zu Ende ist
    }
}
