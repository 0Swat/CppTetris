# Tetris - object-oriented programming game
![img1](https://i.imgur.com/pj8KbUt.png)

*made by:*  
**Oskar Swat**

# Title and Program Description 
 - **Title:** 
 Tetris   
 - **Description:** 
 Tetris program is a console implementation of the popular game Tetris. It allows the user to play the game, control it, change difficulty levels, and track the high score.

# System Requirements
To run the Tetris program, the following are required:
 - Code::Blocks programming environment 
 - Operating system compatible with Code::Blocks
# User Instructions
Upon launching the Tetris program, the user will be greeted with a menu where they can choose one of the options:
-   Play - Starts the game.
-   Difficulty Level - Allows changing the game difficulty level.
-   High Score - Displays the highest score achieved so far.
-   Controls - Provides information about game controls.
-   Quit - Exits the program.

In Tetris game, control is done using the left and right arrow keys to move the block, the down arrow key to accelerate its descent, and the spacebar to rotate the block. After finishing the game, the user will be informed about the score achieved and whether they have beaten the high score. Then, the game returns to the menu.

![img2](https://i.imgur.com/nwCBPbO.png)
# Game Rules 
**The rules of Tetris are standard:**

 1. Blocks of various shapes appear on the board and move downwards. 
 2. The player's goal is to arrange the blocks to create complete lines on
    the board. 
 3. Complete lines are cleared, and the player receives points. 
 4. The game ends when a new block cannot fit on the board.

**Scoring in Tetris:** 
 - For each placed block, the player receives 10 times the number of blocks the shape consists of.  
 - For each complete line, the player receives an additional 100 points.

![img3](https://i.imgur.com/woqDQpP.png)
# Class Diagram
![img4](https://i.imgur.com/z3TFRg2.png)
# Functional Assumptions 
- The program allows starting a new game of Tetris. 
- The player can change the game difficulty level. 
- The program stores and updates the game's high score after each playthrough.
- The game is displayed on the console and controlled via the keyboard.
- The player can view control instructions within the game. 
- The program ensures appropriate delays and animations. 
- Text files are used to store difficulty levels and high scores.

# Non-functional Assumptions 
- The Tetris program is written in C++ using the Code::Blocks programming environment.
- The program runs on operating systems compatible with Code::Blocks.
- The game's graphics are displayed on the console.
- The program has simple Tetris game logic, considering block movements, collisions, and scoring. 
- Text files are used to store data.
