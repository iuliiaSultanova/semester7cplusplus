#include <iostream>

int main() {
    int numKilometers;

    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    std::cin >> numKilometers;

    if (numKilometers <= 0) {
        std::cout << "Ошибка: количество километров должно быть положительным!" << std::endl;
        return 1;
    }

    int totalTime = 0;
    for (int i = 1; i <= numKilometers; i++) {
        int pace;
        std::cout << "Какой у тебя был темп на километре " << i << "? ";
        std::cin >> pace;
        
        if (pace <= 0) {
            std::cout << "Ошибка: темп должен быть положительным!" << std::endl;
            return 1;
        }

        totalTime += pace;
    }

    int averageTimePerKm = totalTime / numKilometers;
    int minutes = averageTimePerKm / 60;
    int seconds = averageTimePerKm % 60;

    std::cout << "Твой средний темп за тренировку: " << minutes << " минут " << seconds << " секунд." << std::endl;

    return 0;
}
