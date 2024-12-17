#include <iostream>
using namespace std;

const int SIZE = 12;

void printBubbleWrap(bool wrap[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << (wrap[i][j] ? "o" : "x") << " ";
        }
        cout << endl;
    }
}

void popBubbles(bool wrap[SIZE][SIZE], int x1, int y1, int x2, int y2) {
    if (x1 < 0 || x1 >= SIZE || y1 < 0 || y1 >= SIZE || x2 < 0 || x2 >= SIZE || y2 < 0 || y2 >= SIZE) {
        cout << "Invalid coordinates!" << endl;
        return;
    }
    for (int i = min(x1, x2); i <= max(x1, x2); ++i) {
        for (int j = min(y1, y2); j <= max(y1, y2); ++j) {
            if (wrap[i][j]) {
                wrap[i][j] = false;
                cout << "Pop!" << endl;
            }
        }
    }
}

void initBubbleWrap(bool wrap[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            wrap[i][j] = true;
        }
    }
}

int main() {
    bool wrap[SIZE][SIZE];
    initBubbleWrap(wrap);

    printBubbleWrap(wrap);

    while (true) {
        int x1, y1, x2, y2;
        cout << "Enter the coordinates of the region to pop (x1 y1 x2 y2): ";
        cin >> x1 >> y1 >> x2 >> y2;

        popBubbles(wrap, x1, y1, x2, y2);
        printBubbleWrap(wrap);

        bool allPopped = true;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (wrap[i][j]) {
                    allPopped = false;
                    break;
                }
            }
        }

        if (allPopped) {
            cout << "All bubbles popped! Game over." << endl;
            break;
        }
    }

    return 0;
}
