#include <iostream>
#include <cmath>

int main() {
    float F, m, t;
    
    std::cout << "Введите силу тяги двигателя (в ньютонах): ";
    std::cin >> F;
    std::cout << "Введите массу корабля (в килограммах): ";
    std::cin >> m;
    std::cout << "Введите время работы двигателя (в секундах): ";
    std::cin >> t;

    if (F <= 0 || m <= 0 || t < 0) {
        std::cout << "Ошибка: все значения должны быть положительными!" << std::endl;
        return 1;
    }

    float distance = (F * pow(t, 2)) / (2 * m);
    std::cout << "Корабль переместится на расстояние: " << distance << " метров." << std::endl;

    return 0;
}
