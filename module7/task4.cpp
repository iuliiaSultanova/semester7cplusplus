#include <iostream>

int main() {
    int width, height;
    std::cout << "Введите ширину и высоту рамки: ";
    std::cin >> width >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1) {
                std::cout << "-";  
            } else if (j == 0 || j == width - 1) {
                std::cout << "|";  
            } else {
                std::cout << " ";  
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
