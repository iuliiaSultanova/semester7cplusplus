#include <iostream>

int main() {
    int bacteria, drops;
    
    std::cout << "Введите количество бактерий: ";
    std::cin >> bacteria;
    std::cout << "Введите количество антибиотика: ";
    std::cin >> drops;

    int hour = 0;
    int killRate = 10;

    while (bacteria > 0 && killRate > 0) {
        hour++;
        bacteria *= 2;  
        bacteria -= (drops * killRate);  
        if (bacteria < 0) bacteria = 0;  

        std::cout << "После " << hour << " часа бактерий осталось: " << bacteria << std::endl;
        
        killRate--; 
    }

    return 0;
}
