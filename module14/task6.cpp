#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
    int matrix[SIZE][SIZE];
    int number = 0;
    int multiplier = 1;

    for (int i = 0; i < SIZE; ++i) {
        if (i % 2 == 1) {
            multiplier = -1;
        } else {
            multiplier = 1;
        }

        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = number;
            number += 1;
        }

        if (multiplier == -1) {
            for (int j = 0; j < SIZE / 2; ++j) {
                swap(matrix[i][j], matrix[i][SIZE - j - 1]);
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
