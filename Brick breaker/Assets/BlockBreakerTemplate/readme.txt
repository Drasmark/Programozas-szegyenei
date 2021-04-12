BLOCK BREAKER TEMPLATE
----------------------
Thank you for purchasing 'Block Breaker Template'. This is a project template 
as well as tutorial for the popular classic game that this is derived from.

--- How The Game Works ---

You start the game with a paddle that you can move horizontally using the arrow
keys. Above you are bricks of which you need to destroy with the ball which
you bounce off your paddle. When all the bricks are destroyed you win the game.
If the ball goes under the paddle you lose a life and if all lives are lost
you lose the game. 

It is a simple game which can be fun and there are many variables in this 
project that can be modified to fit the experience you desire.
Have fun!

--- Features ---

-   Basic menu system.

-   Working block breaker game.

-   Changable brick colour themes.



--- What You Will Get From This ---

-   A tutorial through documentation on how to make a block breaker game.

-   A working block breaker template that can be modified and put up on a store.



--- How To Use As a Template ---

This project is a template so you have the ability to modify it to your wishes.

-   The sprites can be changed to give the game a different look.

-   Variables can be changed like ball speed, paddle speed, game field size, 
	how many bricks spawn and more.

-   If using the default brick sprite, you can change the color pattern of the 
	bricks by going to the 'GameManger' gameobject and modifying the colors array
	on the GameManager.cs script.



--- Folder Layout ---

-   BlockBreakerTemplate
	- Prefabs				//Holds all the game's prefab game objects
		Ball.prefab
		Brick.prefab
		Paddle.prefab
	- Scenes				//Holds all the game's scenes
		Game.unity
		Menu.unity
	- Scripts				//Holds all the game's scripts
		Ball.cs
		Brick.cs
		GameManager.cs
		GameUI.cs
		MenuUI.cs
		Paddle.cs
	- Sprites				//Holds all the game's sprites
		Circle.png
		Square.png
	readme.txt



--- Scripts ---

- Ball.cs

	This script controls the ball. It moves the ball and determins the direction
	that it will move at.

- Brick.cs

	Every brick has this script. When the ball hits the brick, this script will
	add to the score and destroy the brick.

- GameManager.cs

	This is the manager for the game. It holds the score, lives, game states and 
	manages all the bricks. Most scripts connect to this one.

- GameUI.cs

	This script manages the UI in-game. It displays the score, lives and the win
	or lose screens. Whenever a button is pressed it will call a function on this
	script.

- MenuUI.cs

	This script manages the UI in the menu. When the user clicks the buttons, the
	functions in this script get called, starting the game or quitting the game.

- Paddle.cs

	This script controls the paddle. When the user pressed the move buttons on
	the keyboard, the paddle moves accordianly from this script. 



--- Contact ---

-   Email: buckleydaniel101@gmail.com
