#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return std::abs(a);
}

int main() {
    int M, N;

    std::cout << "Введите числитель: ";
    std::cin >> M;
    std::cout << "Введите знаменатель: ";
    std::cin >> N;

    if (N == 0) {
        std::cout << "Знаменатель не может быть равен нулю." << std::endl;
        return 1;
    }

    int divisor = gcd(M, N);

    M /= divisor;
    N /= divisor;

    if (N < 0) { 
        M = -M;
        N = -N;
    }

    std::cout << "Результат: " << M << " / " << N << std::endl;

    return 0;
}
