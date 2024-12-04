#include <iostream>

int main() {
    int water, milk;
    int americano_count = 0, latte_count = 0;

    const int americano_water = 300;
    const int latte_water = 30;
    const int latte_milk = 270;

    std::cout << "Введите количество воды в мл: ";
    std::cin >> water;
    std::cout << "Введите количество молока в мл: ";
    std::cin >> milk;

    while (true) {
        if (water < americano_water && (water < latte_water || milk < latte_milk)) {
            std::cout << "***Отчёт***" << std::endl;
            std::cout << "Ингредиенты подошли к концу" << std::endl;
            std::cout << "Вода: " << water << " мл" << std::endl;
            std::cout << "Молоко: " << milk << " мл" << std::endl;
            std::cout << "Кружек американо приготовлено: " << americano_count << std::endl;
            std::cout << "Кружек латте приготовлено: " << latte_count << std::endl;
            break;
        }

        int choice;
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;

        if (choice == 1) {
            if (water >= americano_water) {
                water -= americano_water;
                americano_count++;
                std::cout << "Ваш напиток готов." << std::endl;
            } else {
                std::cout << "Не хватает воды." << std::endl;
            }
        } else if (choice == 2) {
            if (water >= latte_water && milk >= latte_milk) {
                water -= latte_water;
                milk -= latte_milk;
                latte_count++;
                std::cout << "Ваш напиток готов." << std::endl;
            } else if (water < latte_water) {
                std::cout << "Не хватает воды." << std::endl;
            } else if (milk < latte_milk) {
                std::cout << "Не хватает молока." << std::endl;
            }
        } else {
            std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
        }
    }

    return 0;
}
