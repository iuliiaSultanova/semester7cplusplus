#include <iostream>
#include <string>

int main() {
    int totalLength, exclamationMarks;
    
    std::cout << "Введите общую длину строки: ";
    std::cin >> totalLength;
    std::cout << "Введите количество восклицательных знаков: ";
    std::cin >> exclamationMarks;

    if (exclamationMarks > totalLength || exclamationMarks < 0) {
        std::cout << "Ошибка: количество восклицательных знаков не может быть больше общей длины или меньше 0." << std::endl;
        return 1;
    }

    int spaces = (totalLength - exclamationMarks) / 2;  
    std::string result(totalLength, ' ');

    for (int i = 0; i < exclamationMarks; i++) {
        result[spaces + i] = '!';
    }

    std::cout << result << std::endl;
    return 0;
}
