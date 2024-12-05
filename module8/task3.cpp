#include <iostream>
#include <cmath>

int main() {
    float X, Y, Z;
    const int cubeSide = 5;

    std::cout << "Введите размеры бруска (X, Y, Z в сантиметрах): " << std::endl;
    std::cout << "X: ";
    std::cin >> X;
    std::cout << "Y: ";
    std::cin >> Y;
    std::cout << "Z: ";
    std::cin >> Z;

    if (X < cubeSide || Y < cubeSide || Z < cubeSide) {
        std::cout << "Ошибка: размеры бруска должны быть не меньше 5 см." << std::endl;
        return 1;
    }

    int cubesX = static_cast<int>(X / cubeSide);
    int cubesY = static_cast<int>(Y / cubeSide);
    int cubesZ = static_cast<int>(Z / cubeSide);
    int totalCubes = cubesX * cubesY * cubesZ;

    int maxSetSize = 0;
    for (int i = 1; i * i * i <= totalCubes; i++) {
        maxSetSize = i * i * i;
    }

    std::cout << "Из этого бруска можно изготовить " << totalCubes << " кубиков." << std::endl;
    if (maxSetSize > 0) {
        std::cout << "Из них можно составить набор из " << maxSetSize << " кубиков." << std::endl;
    } else {
        std::cout << "Невозможно составить набор из этих кубиков." << std::endl;
    }

    return 0;
}
