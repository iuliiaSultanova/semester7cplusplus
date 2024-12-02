#include <iostream>
#include <algorithm>

int main() {
    int A, B, C, M, N, K;

    std::cout << "Введите размеры первой коробки (A, B, C): ";
    std::cin >> A >> B >> C;

    std::cout << "Введите размеры второй коробки (M, N, K): ";
    std::cin >> M >> N >> K;

    int box1[] = {A, B, C};
    int box2[] = {M, N, K};
    
    std::sort(box1, box1 + 3);
    std::sort(box2, box2 + 3);

    if (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]) {
        std::cout << "Да, первую коробку можно поместить во вторую.\n";
    } else {
        std::cout << "Нет, первую коробку нельзя поместить во вторую.\n";
    }

    return 0;
}
