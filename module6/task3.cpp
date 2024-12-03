#include <iostream>
#include <string>

int main() {
    std::string debtorName;
    double debt;

    std::cout << "Введите имя должника: ";
    std::getline(std::cin, debtorName);

    std::cout << "Введите сумму долга: ";
    std::cin >> debt;

    if (debt < 0) {
        std::cout << "Сумма долга не может быть отрицательной." << std::endl;
        return 1; 
    }

    while (debt > 0) {
        double payment;
        std::cout << "Введите сумму для погашения долга: ";
        std::cin >> payment;

        if (payment < 0) {
            std::cout << "Сумма платежа не может быть отрицательной." << std::endl;
            continue;
        }

        if (payment < debt) {
            debt -= payment; 
            std::cout << "Осталось долга: " << debt << " рублей." << std::endl;
        } else if (payment > debt) {
            std::cout << "Долг погашен. Остаток на счету: " << (payment - debt) << " рублей." << std::endl;
            debt = 0; 
        } else {
            std::cout << "Долг погашен полностью!" << std::endl;
            debt = 0; 
        }
    }

    return 0;
}
