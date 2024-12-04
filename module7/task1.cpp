#include <iostream>

int main() {
    int supply = 100;  
    const int consumption_per_month = 4;  

    std::cout << "Всего гречки было на начало подсчёта: " << supply << " кг" << std::endl;

    for (int month = 1; supply > 0; month++) {
        supply -= consumption_per_month;  

        if (supply > 0) {
            std::cout << "После " << month << " месяца у вас в запасе останется " << supply << " кг гречки" << std::endl;
        } else {
            std::cout << "После " << month << " месяца гречка закончится" << std::endl;
        }
    }
    return 0;
}
