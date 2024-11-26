#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    std::cout << "-----Проверяем-----\n";

    if (number % 2 == 0) {
        std::cout << "Число " << number << " — чётное\n";
    } else {
        std::cout << "Число " << number << " — нечётное\n";
    }

    return 0;
}
