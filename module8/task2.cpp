#include <iostream>

int main() {
    float health, resistance, damage;

    std::cout << "Введите количество здоровья орка (от 0 до 1): ";
    std::cin >> health;
    std::cout << "Введите сопротивляемость магии орка (от 0 до 1): ";
    std::cin >> resistance;

    if (health < 0 || health > 1 || resistance < 0 || resistance > 1) {
        std::cout << "Ошибка: все значения должны быть в диапазоне от 0 до 1!" << std::endl;
        return 1;
    }

    while (health > 0) {
        std::cout << "Введите мощность огненного шара (от 0 до 1): ";
        std::cin >> damage;

        if (damage < 0 || damage > 1) {
            std::cout << "Ошибка: мощность должна быть от 0 до 1!" << std::endl;
            continue;
        }

        float actualDamage = damage * (1 - resistance);
        health -= actualDamage;
        if (health < 0) health = 0;

        std::cout << "Нанесено урона: " << actualDamage << ", оставшееся здоровье орка: " << health << std::endl;
    }

    std::cout << "Орк погиб!" << std::endl;
    return 0;
}
