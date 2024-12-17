#include <iostream>
#include <algorithm>
using namespace std;

const int FIELD_SIZE = 10;
bool field_1[FIELD_SIZE][FIELD_SIZE] = {false};
bool field_2[FIELD_SIZE][FIELD_SIZE] = {false};

bool placeShip(bool field[FIELD_SIZE][FIELD_SIZE], int x1, int y1, int x2, int y2) {
    // проверка на корректность координат и направления
    if (x1 != x2 && y1 != y2) {
        cout << "Ships can only be placed horizontally or vertically!" << endl;
        return false;
    }
    if (x1 < 0 || x2 < 0 || y1 < 0 || y2 < 0 || x1 >= FIELD_SIZE || x2 >= FIELD_SIZE || y1 >= FIELD_SIZE || y2 >= FIELD_SIZE) {
        cout << "Coordinates are out of bounds!" << endl;
        return false;
    }

    // проверка на свободные клетки
    int startX = min(x1, x2), endX = max(x1, x2);
    int startY = min(y1, y2), endY = max(y1, y2);

    for (int i = startX; i <= endX; ++i) {
        for (int j = startY; j <= endY; ++j) {
            if (field[i][j]) {
                cout << "Ship cannot overlap with another ship!" << endl;
                return false;
            }
        }
    }

    // Установка корабля
    for (int i = startX; i <= endX; ++i) {
        for (int j = startY; j <= endY; ++j) {
            field[i][j] = true;
        }
    }

    return true;
}

void placeAllShips(bool field[FIELD_SIZE][FIELD_SIZE]) {
    int ship_sizes[] = {1, 1, 1, 1, 2, 2, 2, 3, 3, 4};
    for (int size : ship_sizes) {
        bool placed = false;
        while (!placed) {
            int x1, y1, x2, y2;
            if (size == 1) {
                cout << "Enter coordinates for 1-cell ship (x y): ";
                cin >> x1 >> y1;
                x2 = x1;
                y2 = y1;
            } else {
                cout << "Enter start and end coordinates for " << size << "-cell ship (x1 y1 x2 y2): ";
                cin >> x1 >> y1 >> x2 >> y2;
            }
            placed = placeShip(field, x1, y1, x2, y2);
        }
    }
}

bool attack(bool field[FIELD_SIZE][FIELD_SIZE], int x, int y) {
    if (x < 0 || x >= FIELD_SIZE || y < 0 || y >= FIELD_SIZE) {
        cout << "Coordinates out of bounds!" << endl;
        return false;
    }
    if (field[x][y]) {
        field[x][y] = false;
        cout << "Hit!" << endl;
        return true;
    } else {
        cout << "Miss!" << endl;
        return false;
    }
}

bool allShipsDestroyed(bool field[FIELD_SIZE][FIELD_SIZE]) {
    for (int i = 0; i < FIELD_SIZE; ++i) {
        for (int j = 0; j < FIELD_SIZE; ++j) {
            if (field[i][j]) return false;
        }
    }
    return true;
}

int main() {
    cout << "Player 1, place your ships." << endl;
    placeAllShips(field_1);

    cout << "Player 2, place your ships." << endl;
    placeAllShips(field_2);

    int currentPlayer = 1;
    while (true) {
        int x, y;
        cout << "Player " << currentPlayer << ", enter coordinates to attack (x y): ";
        cin >> x >> y;

        bool hit;
        if (currentPlayer == 1) {
            hit = attack(field_2, x, y);
            if (allShipsDestroyed(field_2)) {
                cout << "Player 1 wins!" << endl;
                break;
            }
        } else {
            hit = attack(field_1, x, y);
            if (allShipsDestroyed(field_1)) {
                cout << "Player 2 wins!" << endl;
                break;
            }
        }

        if (!hit) currentPlayer = 3 - currentPlayer;  // Смена хода
    }

    return 0;
}
