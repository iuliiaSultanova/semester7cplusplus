#include <iostream>

int main() {
    int N;

    std::cout << "Введите номер последовательности: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Номер должен быть положительным." << std::endl;
        return 1;
    }

    long long a = 1, b = 1; 

    if (N == 1 || N == 2) {
        std::cout << "Число в последовательности: " << 1 << std::endl;
        return 0;
    }

    long long fibonacciNumber = 1;

    for (int i = 3; i <= N; ++i) {
        fibonacciNumber = a + b; 
        a = b;
        b = fibonacciNumber; 
    }

    std::cout << "Число в последовательности: " << fibonacciNumber << std::endl;

    return 0;
}
