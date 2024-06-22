# Tic Tac Toe Game in C++

This repository contains a simple implementation of the classic Tic Tac Toe game in C++. The game runs in the terminal and allows two players to take turns marking spaces in a 3x3 grid with their respective markers ('X' and 'O'). The game includes win condition checks for horizontal, vertical, and diagonal lines, as well as a tie condition when the board is full.

## Features

- **Terminal Interface**: Play the game directly in your terminal.
- **Two-Player Mode**: Compete with a friend on the same computer.
- **Win Detection**: Automatically detects and announces when a player wins.
- **Tie Condition**: Handles and announces a tie when the board is full without a winner.

## How to Play

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/tic-tac-toe-cpp.git
    ```
2. Navigate to the project directory:
    ```bash
    cd tic-tac-toe-cpp
    ```
3. Compile the game using a C++ compiler, e.g., g++:
    ```bash
    g++ -o tic_tac_toe tic_tac_toe.cpp
    ```
4. Run the game:
    ```bash
    ./tic_tac_toe
    ```
5. Follow the on-screen instructions to play. Players take turns entering the row and column numbers (1-3) to place their markers.

## Game Rules

- Players take turns marking empty cells in a 3x3 grid.
- The first player to get three of their markers in a row (horizontally, vertically, or diagonally) wins the game.
- If all cells are filled without any player achieving three in a row, the game ends in a tie.

## Contribution

Contributions are welcome! If you find a bug or have a feature request, please open an issue. Feel free to fork the repository and submit a pull request with your enhancements.

## Acknowledgments

- This game is a classic and simple implementation for learning and fun.


