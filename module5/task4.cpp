#include <iostream>

int main() {
    int amount;

    std::cout << "Введите сумму для снятия (не более 150 000): ";
    std::cin >> amount;

    if (amount > 150000) {
        std::cout << "Ошибка: превышен лимит в 150 000 рублей.\n";
        return 1;
    } else if (amount % 100 != 0) {
        std::cout << "Ошибка: сумма должна быть кратна 100.\n";
        return 1;
    }

    int bills5000 = amount / 5000;
    amount %= 5000;

    int bills2000 = amount / 2000;
    amount %= 2000;

    int bills1000 = amount / 1000;
    amount %= 1000;

    int bills500 = amount / 500;
    amount %= 500;

    int bills200 = amount / 200;
    amount %= 200;

    int bills100 = amount / 100;

    std::cout << "Рекомендуемый набор купюр для выдачи:\n";
    if (bills5000 > 0) std::cout << bills5000 << " купюр по 5000\n";
    if (bills2000 > 0) std::cout << bills2000 << " купюр по 2000\n";
    if (bills1000 > 0) std::cout << bills1000 << " купюр по 1000\n";
    if (bills500 > 0) std::cout << bills500 << " купюр по 500\n";
    if (bills200 > 0) std::cout << bills200 << " купюр по 200\n";
    if (bills100 > 0) std::cout << bills100 << " купюр по 100\n";

    return 0;
}
