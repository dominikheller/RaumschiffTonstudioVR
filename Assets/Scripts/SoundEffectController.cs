using UnityEngine;
using UnityEngine.Audio;

public class SoundEffectController : MonoBehaviour
{
    public AudioMixer masterMixer;

    public void setSoundEffectLevel(string soundEffectTitle, float echoLevel, float factor = 1)
    {
        masterMixer.SetFloat(soundEffectTitle, echoLevel * factor);
    }
}
