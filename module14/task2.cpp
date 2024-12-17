#include <iostream>
#include <vector>

const int SIZE = 3;

void printBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << (cell == ' ' ? '.' : cell) << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }
    return false;
}

int main() {
    std::vector<std::vector<char>> board(SIZE, std::vector<char>(SIZE, ' '));
    char currentPlayer = 'X';
    int moves = 0;

    while (moves < SIZE * SIZE) {
        printBoard(board);
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter row and column (1-3): ";
        std::cin >> row >> col;
        row--; col--;

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            std::cout << "Invalid move, try again.\n";
            continue;
        }

        board[row][col] = currentPlayer;
        moves++;

        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            std::cout << "Player " << currentPlayer << " wins!\n";
            return 0;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    printBoard(board);
    std::cout << "It's a draw!\n";
    return 0;
}
