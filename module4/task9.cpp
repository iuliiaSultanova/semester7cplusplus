#include <iostream>

int main() {
    double income, tax = 0.0;

    std::cout << "Введите ваш доход: ";
    std::cin >> income;

    if (income <= 10000) {
        tax = income * 0.13;
    } else if (income <= 50000) {
        tax = 10000 * 0.13 + (income - 10000) * 0.20;
    } else {
        tax = 10000 * 0.13 + 40000 * 0.20 + (income - 50000) * 0.30;
    }

    std::cout << "Сумма налога: " << tax << " руб.\n";

    return 0;
}
