#include <iostream>
#include <string>

int main() {
    const int numApartments = 10;
    std::string residents[numApartments];
    
    std::cout << "Введите фамилии жильцов для каждой из 10 квартир:" << std::endl;
    for (int i = 0; i < numApartments; ++i) {
        std::cout << "Квартира " << (i + 1) << ": ";
        std::cin >> residents[i];
    }
    
    // Ввод номеров квартир для проверки
    std::cout << "Введите три номера квартир для вывода фамилий жильцов:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        int apartmentNumber;
        std::cin >> apartmentNumber;
        
        if (apartmentNumber >= 1 && apartmentNumber <= numApartments) {
            std::cout << residents[apartmentNumber - 1] << std::endl;
        } else {
            std::cout << "Некорректный номер квартиры" << std::endl;
        }
    }
    
    return 0;
}
