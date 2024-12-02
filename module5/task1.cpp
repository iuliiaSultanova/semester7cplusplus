#include <iostream>

int main() {
    int speed, altitude;

    std::cout << "Введите скорость самолёта (км/ч): ";
    std::cin >> speed;

    std::cout << "Введите высоту полёта самолёта (м): ";
    std::cin >> altitude;

    if (speed >= 750 && speed <= 850 && altitude >= 9000 && altitude <= 9500) {
        std::cout << "Полёт нормальный!\n";
    } else {
        std::cout << "Эшелон не соответствует требованиям!\n";
    }

    return 0;
}
