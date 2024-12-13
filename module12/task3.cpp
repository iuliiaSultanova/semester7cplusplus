#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {
    assert(speed > 0 && "Скорость должна быть положительной и ненулевой");
    return distance / speed;
}

int main() {
    float distance, speed;
    std::cout << "Введите расстояние и скорость: ";
    std::cin >> distance >> speed;

    float time = travelTime(distance, speed);
    std::cout << "Время в пути: " << time << std::endl;

    return 0;
}
