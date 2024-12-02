#include <iostream>

int main() {
    int day;

    std::cout << "Введите номер дня мая (1-31): ";
    std::cin >> day;

    if (day < 1 || day > 31) {
        std::cout << "Некорректный номер дня!\n";
    } else if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || day % 7 == 6 || day % 7 == 0) {
        std::cout << "Этот день - выходной.\n";
    } else {
        std::cout << "Этот день - рабочий.\n";
    }

    return 0;
}
