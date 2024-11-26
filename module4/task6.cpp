#include <iostream>

int main() {
    int numPeople, numBarbers;
    const int workingHoursPerDay = 8;
    const int daysInMonth = 30;

    std::cout << "Введите количество людей в городе: ";
    std::cin >> numPeople;
    std::cout << "Введите количество барберов: ";
    std::cin >> numBarbers;

    int totalWorkingHoursPerMonth = numBarbers * workingHoursPerDay * daysInMonth;
    
    if (totalWorkingHoursPerMonth >= numPeople) {
        std::cout << "Барберов достаточно для обслуживания всех клиентов.\n";
    } else {
        int requiredBarbers = (numPeople + workingHoursPerDay * daysInMonth - 1) / (workingHoursPerDay * daysInMonth);
        std::cout << "Барберов недостаточно. Нужно как минимум " << requiredBarbers << " барберов.\n";
    }

    return 0;
}
