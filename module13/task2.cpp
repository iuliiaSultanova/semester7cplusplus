#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    
    std::vector<int> items {1, 1, 0, 3};

    float totalCost = 0.0;
    for (int index : items) {
        if (index >= 0 && index < prices.size()) {
            totalCost += prices[index];
        } else {
            std::cout << "Некорректный индекс покупки: " << index << std::endl;
        }
    }

    std::cout << "Суммарная стоимость покупок: " << totalCost << std::endl;

    return 0;
}
