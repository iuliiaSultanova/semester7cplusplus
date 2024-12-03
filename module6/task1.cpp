#include <iostream>

int main() {
    int hours;

    std::cout << "Введите, который час: ";
    std::cin >> hours;

    if (hours < 0) {
        std::cout << "Часы не могут быть отрицательными." << std::endl;
    } else if (hours == 0) {
        std::cout << "Кукушка не может оповестить о полночи." << std::endl;
    } else {
      
        for (int i = 0; i < hours; ++i) {
            std::cout << "Ку-ку!" << std::endl;
        }
    }

    return 0;
}
