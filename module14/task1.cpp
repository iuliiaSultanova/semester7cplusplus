#include <iostream>

int main() {
    int utensils[2][6] = { {3, 3, 3, 3, 3, 4}, {3, 3, 3, 3, 3, 4} }; 
    int plates[2][6] = { {2, 2, 2, 2, 2, 3}, {2, 2, 2, 2, 2, 3} };   
    int chairs[2][6] = { {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1} };   

    chairs[0][4] += 1;            
    utensils[1][2] -= 1;          
    utensils[0][5] -= 1;          
    plates[0][5] -= 1;            

    std::cout << "Utensils:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << utensils[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nPlates:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << plates[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\nChairs:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << chairs[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
