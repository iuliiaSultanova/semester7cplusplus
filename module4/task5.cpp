#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "-----Проверяем-----\n";

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            std::cout << "Да, " << num1 << " делится на " << num2 << " без остатка!\n";
        } else {
            std::cout << "Нет, " << num1 << " не делится на " << num2 << " без остатка!\n";
        }
    } else {
        std::cout << "Ошибка! Деление на ноль невозможно.\n";
    }

    return 0;
}
