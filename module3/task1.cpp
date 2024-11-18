#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> stops = {
        "Улица программистов",
        "Проспект алгоритмов",
        "Бульвар компьютеров",
        "Площадь IT-специалистов"
    };

    const int ticketPrice = 20;
    int passengers = 0;
    int totalIncome = 0;

    for (int i = 0; i < stops.size(); ++i) {
        std::cout << "Прибываем на остановку \"" << stops[i] << "\". В салоне пассажиров: " << passengers << "\n";

        int passengersOut = 0, passengersIn = 0;
        std::cout << "Сколько пассажиров вышло на остановке? ";
        std::cin >> passengersOut;

        if (passengersOut > passengers) {
            passengersOut = passengers;
            std::cout << "Ошибка: вышло больше пассажиров, чем было. Все пассажиры вышли.\n";
        }
        passengers -= passengersOut; 

        std::cout << "Сколько пассажиров зашло на остановке? ";
        std::cin >> passengersIn;
        passengers += passengersIn; 

        totalIncome += passengersIn * ticketPrice;

        std::cout << "Отправляемся с остановки \"" << stops[i] << "\". В салоне пассажиров: " << passengers << "\n";
        std::cout << "-----------Едем---------\n";
    }

    std::cout << "Маршрут завершен.\n";
    std::cout << "Всего заработали: " << totalIncome << " руб.\n";

    double driverSalary = totalIncome * 0.25; 
    double fuelCosts = totalIncome * 0.20; 
    double taxCosts = totalIncome * 0.20; 
    double repairCosts = totalIncome * 0.20; 

    double netIncome = totalIncome - (driverSalary + fuelCosts + taxCosts + repairCosts);

    std::cout << "Зарплата водителя: " << driverSalary << " руб.\n";
    std::cout << "Расходы на топливо: " << fuelCosts << " руб.\n";
    std::cout << "Налоги: " << taxCosts << " руб.\n";
    std::cout << "Расходы на ремонт машины: " << repairCosts << " руб.\n";
    std::cout << "Итого доход: " << netIncome << " руб.\n";

    return 0;
}
