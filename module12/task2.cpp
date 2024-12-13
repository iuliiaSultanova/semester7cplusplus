#include <iostream>

int main() {
    const int numElements = 15;
    float numbers[numElements];
    
    std::cout << "Введите 15 дробных чисел:" << std::endl;
    for (int i = 0; i < numElements; ++i) {
        std::cin >> numbers[i];
    }

    // Сортировка пузырьком
    for (int i = 0; i < numElements - 1; ++i) {
        for (int j = 0; j < numElements - i - 1; ++j) {
            if (numbers[j] < numbers[j + 1]) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    std::cout << "Числа в порядке убывания:" << std::endl;
    for (int i = 0; i < numElements; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
