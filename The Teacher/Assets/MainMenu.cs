using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
    public void ApplicationQuit()
    {
        Application.Quit();
    }
    public void LoadScene(string name)
    {
        Application.LoadLevel(name);
    }
}
