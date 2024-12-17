#include <iostream>
using namespace std;

const int SIZE = 5;
const int MAX_HEIGHT = 10;

int main() {
    int heights[SIZE][SIZE];
    bool world[SIZE][SIZE][MAX_HEIGHT] = {false};

    cout << "Enter the height of each sector (5x5 matrix):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> heights[i][j];
            if (heights[i][j] < 0) heights[i][j] = 0;
            if (heights[i][j] > MAX_HEIGHT) heights[i][j] = MAX_HEIGHT;
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < heights[i][j]; ++k) {
                world[i][j][k] = true;
            }
        }
    }

    int level;
    cout << "Enter the level to slice (0 to " << MAX_HEIGHT - 1 << "): ";
    cin >> level;

    cout << "Horizontal slice at level " << level << ":" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << (world[i][j][level] ? "1 " : "0 ");
        }
        cout << endl;
    }

    return 0;
}
