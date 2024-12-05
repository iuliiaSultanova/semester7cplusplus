#include <iostream>

int main() {
    double initialAmplitude, stopAmplitude;
    const double dampingFactor = 0.084;  

    std::cout << "Введите начальную амплитуду колебания (в см): ";
    std::cin >> initialAmplitude;
    std::cout << "Введите амплитуду остановки (в см): ";
    std::cin >> stopAmplitude;

    if (initialAmplitude <= 0 || stopAmplitude <= 0 || initialAmplitude <= stopAmplitude) {
        std::cout << "Ошибка: начальная амплитуда должна быть больше конечной, и обе должны быть положительными!" << std::endl;
        return 1;
    }

    int swings = 0;
    while (initialAmplitude > stopAmplitude) {
        initialAmplitude *= (1 - dampingFactor);
        swings++;
    }

    std::cout << "Маятник качнётся " << swings << " раз перед остановкой." << std::endl;
    return 0;
}
