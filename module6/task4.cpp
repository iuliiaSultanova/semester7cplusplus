#include <iostream>
#include <algorithm>

int main() {
    std::string ticket;
    
    std::cout << "Введите номер билета: ";
    std::cin >> ticket;

    if (ticket.length() != 6 || !std::all_of(ticket.begin(), ticket.end(), ::isdigit)) {
        std::cout << "Некорректный номер билета. Он должен содержать 6 цифр." << std::endl;
        return 1;
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 3; ++i) {
        sum1 += ticket[i] - '0'; 
        sum2 += ticket[i + 3] - '0'; 
    }

    if (sum1 == sum2) {
        std::cout << "Билет счастливый!" << std::endl;
    } else {
        std::cout << "Повезёт в следующий раз!" << std::endl;
    }

    return 0;
}
