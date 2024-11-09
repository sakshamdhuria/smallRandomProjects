# Judgement Game Simulation

This project is a C++ simulation of a card game:Judgement where players make predictions about the number of hands they will win and earn points based on the accuracy of their predictions.

## Overview

The game simulates a series of rounds in which players predict how many hands they will win. Each round, a starting player is chosen based on the game number, and players take turns making their predictions. 
The program keeps track of each player's score, updating it based on how close their predictions were to the actual outcomes.

## How to Use

### Requirements

- C++ compiler (e.g., `g++`)
- Standard C++ library headers (e.g., `<bits/stdc++.h>`)

### Compilation

To compile the code, run:

```bash
g++ -o judgement judgement.cpp
```
### Running the Game

1. **Compile the Code:**
   Use the following command to compile the code:
   ```bash
   g++ -o gameSim gameSim.cpp
2. Run the Game: Execute the compiled file:
   ```bash
   ./gameSim
3. Input Details:
   Enter the number of players when prompted.
   Assign a unique character to each player (e.g., A, B, C).
4. Gameplay Flow:
  Specify how many hands will be played in the round.
  Enter predictions for each player, starting from the designated starting player. The last player is not allowed to predict a number that makes the total predictions equal to the number of hands.
  For each hand played, input the character of the player who won the hand.
5. Score Calculation and Display:
  At the end of the round, the program displays the current scores for all players.
  Choose whether to continue with another round or end the game.
6. Ending the Game:
  When you choose to stop playing, the program will display the final scores from best to worst.
7. Below is an example interaction with the game:
```bash
Hey, How many players are playing?
3
Before starting can you one by one give a character representing each player
A
B
C
How many hands are in this round?
5
Starting from A what is your prediction?
2
1
The last person you are not allowed to say 2
3
Just every time someone wins let me know their corresponding char:
A
C
B
A
C
The current scores:
A: 0
B: 1
C: 0
Would you like to continue? (y/n)
n
Thank you for playing! Here are the scores from best to worst:
A: 0
C: 0
B: 1
```
