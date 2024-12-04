#include <iostream>

int main() {
    const int width = 21;
    const int height = 21;
    const int center_x = width / 2;
    const int center_y = height / 2;

    for (int y = height - 1; y >= 0; y--) {
        for (int x = 0; x < width; x++) {
            if (x == center_x && y == center_y) {
                std::cout << "+";  
            } else if (x == center_x && y == height - 1) {
                std::cout << "^";  
            } else if (x == center_x) {
                std::cout << "|";  
            } else if (y == center_y && x == width - 1) {
                std::cout << ">";  
            } else if (y == center_y) {
                std::cout << "-";  
            } else {
                std::cout << " ";  
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
