#include <iostream>

int main() {
    int num1, num2, userSum;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Введите их сумму: ";
    std::cin >> userSum;

    int correctSum = num1 + num2;

    std::cout << "-----Проверяем-----\n";

    if (userSum == correctSum) {
        std::cout << "Верно!\n";
    } else {
        std::cout << "Ошибка! Верный результат: " << correctSum << "\n";
    }

    return 0;
}
