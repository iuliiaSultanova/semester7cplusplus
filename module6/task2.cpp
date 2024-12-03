#include <iostream>
#include <cmath>

int main() {
    long long number;

    std::cout << "Введите число: ";
    std::cin >> number;

    int digitCount = 0;
    
  
    if (number == 0) {
        digitCount = 1; 
    } else {
        digitCount = std::log10(std::abs(number)) + 1;
    }

    std::cout << "Цифр в числе: " << digitCount << std::endl;

    return 0;
}
