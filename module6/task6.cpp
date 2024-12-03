#include <iostream>

int main() {
    int X, Y, P;
    
    std::cout << "Введите размер вклада: ";
    std::cin >> X;
    std::cout << "Введите процентную ставку: ";
    std::cin >> P;
    std::cout << "Введите желаемую сумму: ";
    std::cin >> Y;

    if (X <= 0 || Y <= 0 || P <= 0) {
        std::cout << "Все значения должны быть положительными." << std::endl;
        return 1;
    }

    int years = 0;
    while (X < Y) {
        X += (X * P) / 100; 
        years++;
    }

    std::cout << "Придётся подождать: " << years << " лет" << std::endl;

    return 0;
}
