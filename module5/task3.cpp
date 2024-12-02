#include <iostream>

int main() {
    int day, start_day;

    std::cout << "Введите номер дня мая (1-31): ";
    std::cin >> day;

    std::cout << "Введите день недели, с которого начинается май (1 - понедельник, 7 - воскресенье): ";
    std::cin >> start_day;

    if (day < 1 || day > 31 || start_day < 1 || start_day > 7) {
        std::cout << "Некорректный номер дня или дня недели!\n";
        return 1;
    }

    int week_day = (day + start_day - 2) % 7 + 1;

    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || week_day == 6 || week_day == 7) {
        std::cout << "Этот день - выходной.\n";
    } else {
        std::cout << "Этот день - рабочий.\n";
    }

    return 0;
}
