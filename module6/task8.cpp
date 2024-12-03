#include <iostream>
#include <string>

int main() {
    int low = 0;
    int high = 63; 
    int guess; 

    std::cout << "Загадайте число от 0 до 63, а я постараюсь его угадать!" << std::endl;

    while (low <= high) {
        guess = (low + high) / 2; 

        std::cout << "Ваше число больше " << guess << "? (да/нет): ";
        std::string response;
        std::cin >> response;

        if (response == "да") {
            low = guess + 1; 
        } else if (response == "нет") {
            high = guess; 
        } else {
            std::cout << "Пожалуйста, отвечайте только 'да' или 'нет'." << std::endl;
        }

        if (low == high) {
            std::cout << "Ваше число: " << low << "!" << std::endl;
            break;
        }
    }

    return 0;
}
