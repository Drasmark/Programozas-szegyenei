using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MenuUI : MonoBehaviour 
{
	//Called when the play button is pressed
	public void PlayButton ()
	{
		Application.LoadLevel(1);	//Loads the 'Game' scene to begin the game
	}

	//Called when the quit button is pressed
	public void QuitButton ()
	{
		Application.Quit();			//Quits the game
	}
}
