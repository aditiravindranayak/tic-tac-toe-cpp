#include <iostream>
#include <vector>

using namespace std;

// Constants for the game
const int SIZE = 3;
const char EMPTY = ' ';
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

// Function to print the game board
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "---------\n";
    }
}

// Function to check if a move is valid
bool isValidMove(const vector<vector<char>>& board, int row, int col) {
    return row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == EMPTY;
}

// Function to make a move
void makeMove(vector<vector<char>>& board, int row, int col, char player) {
    if (isValidMove(board, row, col)) {
        board[row][col] = player;
    }
}

// Function to check for a win condition
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == EMPTY) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(SIZE, vector<char>(SIZE, EMPTY));
    bool player1Turn = true;

    cout << "Welcome to Tic Tac Toe!\n";

    while (true) {
        printBoard(board);

        char currentPlayer = (player1Turn) ? PLAYER1 : PLAYER2;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        
        int row, col;
        cin >> row >> col;
        row--; // Convert to 0-based indexing
        col--;

        if (isValidMove(board, row, col)) {
            makeMove(board, row, col, currentPlayer);
            if (checkWin(board, currentPlayer)) {
                printBoard(board);
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }
            if (isBoardFull(board)) {
                printBoard(board);
                cout << "It's a tie!\n";
                break;
            }
            player1Turn = !player1Turn; // Switch players
        } else {
            cout << "Invalid move. Try again.\n";
        }
    }

    return 0;
}
