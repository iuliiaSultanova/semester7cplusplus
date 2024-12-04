#include <iostream>

int main() {
    const int width = 20;
    const int height = 15;
    int x = width / 2;    
    int y = height / 2;   

    char command;
    std::cout << "Марсоход находится на позиции " << x << ", " << y << "." << std::endl;

    while (true) {
        std::cout << "Введите команду для движения (W - север, S - юг, A - запад, D - восток): ";
        std::cin >> command;

        if (command == 'W' || command == 'w') {
            if (y < height - 1) y++;
        } else if (command == 'S' || command == 's') {
            if (y > 0) y--;
        } else if (command == 'A' || command == 'a') {
            if (x > 0) x--;
        } else if (command == 'D' || command == 'd') {
            if (x < width - 1) x++;
        } else {
            std::cout << "Неверная команда. Пожалуйста, введите W, A, S или D." << std::endl;
            continue;
        }

        std::cout << "Марсоход находится на позиции " << x << ", " << y << "." << std::endl;
    }
    return 0;
}
