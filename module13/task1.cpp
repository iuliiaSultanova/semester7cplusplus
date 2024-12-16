#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите размер вектора: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Введите числа: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int x;
    std::cout << "Введите число для удаления: ";
    std::cin >> x;

    int newSize = 0; 
    for (int i = 0; i < n; ++i) {
        if (numbers[i] != x) {
            numbers[newSize++] = numbers[i];
        }
    }

    while (numbers.size() > newSize) {
        numbers.pop_back();
    }

    std::cout << "Результат: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
