#include <iostream>

int main() {
    int birth_day, birth_month, birth_year;
    int current_day, current_month, current_year;

    std::cout << "Введите текущую дату (день, месяц, год): ";
    std::cin >> current_day >> current_month >> current_year;

    std::cout << "Введите дату рождения (день, месяц, год): ";
    std::cin >> birth_day >> birth_month >> birth_year;

    int age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day <= birth_day)) {
        age--;
    }

    if (age >= 18) {
        std::cout << "Можно\n";
    } else {
        std::cout << "Нельзя\n";
    }

    return 0;
}
