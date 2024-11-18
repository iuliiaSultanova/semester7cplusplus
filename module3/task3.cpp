#include <iostream>

int main() {
    int beginHeight = 100; 
    int dailyGrowth = 50;  
    int nightFade = 20;    

    int heightAtThirdDayMid = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

    std::cout << "Высота бамбука в середине третьего дня: " << heightAtThirdDayMid << " см.\n";

    return 0;
}
