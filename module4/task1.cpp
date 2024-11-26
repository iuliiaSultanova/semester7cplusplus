#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "-----Проверяем-----\n";

    if (num1 < num2) {
        std::cout << "Наименьшее число: " << num1 << "\n";
    } else if (num1 > num2) {
        std::cout << "Наименьшее число: " << num2 << "\n";
    } else {
        std::cout << "Числа равны!\n";
    }
}