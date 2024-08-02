# Rock-Scissors-Paper Game
**This is a simple command-line implementation of the classic Rock-Scissors-Paper game written in C. The game allows two players, one being a human and the other being the computer, to compete against each other until one player reaches a winning score.**

## Features
- Two players: a human player and a computer.
- Random choice for the computer using the **rand()** function and **time(NULL).**
- The first player to reach a score of 10 wins.
- Displays the results of each round.
- Displays the final winner.
- Provides a summary of all rounds at the end.
- Getting Started

## Prerequisites
To compile and run this program, you need to have a C compiler installed on your system.
Commonly used compilers include gcc on Linux and Mac, or cl for the Microsoft C++ Build Tools on Windows.

## Compilation
To compile the program, use the following command:

```sh
gcc -o game game.c
```
This command compiles the rock_scissors_paper.c source file into an executable named rock_scissors_paper.

Running the Program
After compilation, you can run the program with the following command:

```sh
./game
```
This will start the game, prompting the users to enter their names and begin the rounds.

## How to Play
- Start the Game: Enter the names of the two players. The second player is the computer.
- Choose Your Move: For each round, the human player chooses 'R' (Rock), 'P' (Paper), or 'S' (Scissors).
- Computer's Move: The computer randomly selects its move.
- Winning Condition: The game continues until one player reaches a score of 10.
- Round Results: After each round, the game displays the moves, the winner of the round, and the current scores.
- Final Results: Once a player reaches 10 points, the game announces the winner and displays a summary of all rounds.

## Code Explanation
**Here's a brief overview of the main components of the code:**
- Initialization: The game initializes scores and sets up the random number generator.
- Input Handling: The program takes player names and ensures valid input for moves.
- Game Loop: The game loop continues until one player wins 10 rounds.
- Score Tracking: The program keeps track of scores and displays them after each round.
- Round Summary: After the game concludes, a summary of all rounds is displayed.

## Sample Output
```sh
Welcome to the Rock-Scissors-Paper Game!
Name 1: Alice
Name 2: Bob
---
Choose 'R' or 'P' or 'S'.
Alice: R
Bob: P
Bob Wins!

Round: 1  |Alice 0 - 1 Bob|
...
Winner is: Bob

Round 1: Alice 0 - 1 Bob  (R - P)
Round 2: Alice 1 - 1 Bob  (P - R)
```
Winning Score: Change the ```#define WIN 10``` line to adjust the number of wins required to win the game.

**NOTE:** This project is developed as part of a university assignment at Harokopio University of Athens.
