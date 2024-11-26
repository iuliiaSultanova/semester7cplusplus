#include <iostream>

int main() {
    int experiencePoints;
    
    std::cout << "Введите число очков опыта: ";
    std::cin >> experiencePoints;
    
    std::cout << "-----Считаем-----\n";

    int level = 1; 

    if (experiencePoints >= 5000) {
        level = 4;
    } else if (experiencePoints >= 2500) {
        level = 3;
    } else if (experiencePoints >= 1000) {
        level = 2;
    }

    std::cout << "Ваш уровень: " << level << "\n";

    return 0;
}
