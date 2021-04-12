using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameManager : MonoBehaviour 
{
	public int score;
	public int lives;
	public bool gameOver;
	public bool wonGame;

	public GameObject paddle;
	public GameObject ball;

	public GameUI gameUI;

	public GameObject brickPrefab;	//The prefab of the Brick game object which will be spawned

	public List<GameObject> bricks = new List<GameObject>();	//List of all the bricks currently on the screen
	public int brickCountX;										//The amount of bricks that will be spawned horizontally (Odd numbers are recommended)
	public int brickCountY;										//The amount of bricks that will be spawned vertically

	public Color[] colors;			//The color array of the bricks. This can be modified to create different brick color patterns

	void Start ()
	{
		StartGame();
	}

	public void StartGame ()
	{
		score = 0;
		lives = 3;
		gameOver = false;
		wonGame = false;
		paddle.active = true;
		ball.active = true;
		paddle.GetComponent<Paddle>().ResetPaddle();
		CreateBrickArray();
	}

	//Spawns the bricks and sets their colours
	public void CreateBrickArray ()
	{
		int colorId = 0;

		for(int y = 0; y < brickCountY; y++){															
			for(int x = -(brickCountX / 2); x < (brickCountX / 2); x++){
				Vector2 pos = new Vector2(0.8f + (x * 1.6f), 1 + (y * 0.4f));
				GameObject brick = Instantiate(brickPrefab, pos, Quaternion.identity) as GameObject;	//Creates a new brick game object at the 'pos' value
				brick.GetComponent<Brick>().manager = this;												//Gets the 'Brick' component of the game object and sets its 'manager' variable to this the GameManager
				brick.GetComponent<SpriteRenderer>().color = colors[colorId];							//Gets the 'SpriteRenderer' component of the brick object and sets the color
				bricks.Add(brick);																		//Adds the new brick object to the 'bricks' list
			}

			colorId++;						//Increases the 'colorId' by 1 as a new row is about to be made

			if(colorId == colors.Length)	//If the 'colorId' is equal to the 'colors' array length. This means there is no more colors left
				colorId = 0;
		}

		ball.GetComponent<Ball>().ResetBall();	//Gets the 'Ball' component of the ball game object and calls the 'ResetBall()' function to set the ball in the middle of the screen
	}

	//Called when there is no bricks left and the player has won
	public void WinGame ()
	{
		wonGame = true;
		paddle.active = false;			//Disables the paddle so it's invisible
		ball.active = false;			//Disables the ball so it's invisible
		gameUI.SetWin();				//Set the game over UI screen
	}

	//Called when the ball goes under the paddle and "dies"
	public void LiveLost ()
	{
		lives--;										//Removes a life

		if(lives < 0){									//Are the lives less than 0? Are there no lives left?
			gameOver = true;
			paddle.active = false;						//Disables the paddle so it's invisible
			ball.active = false;						//Disables the ball so it's invisible
			gameUI.SetGameOver();						//Set the game over UI screen

			for(int x = 0; x < bricks.Count; x++){		//Loops through the 'bricks' list
				Destroy(bricks[x]);						//Destory the brick
			}

			bricks = new List<GameObject>();			//Resets the 'bricks' list variable
		}
        paddle.GetComponent<Paddle>().ResetPaddle();
	}
}
