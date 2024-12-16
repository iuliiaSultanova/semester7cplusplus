#include <iostream>
#include <vector>

int main() {
    const int maxSize = 20;
    std::vector<int> db(maxSize);
    int currentSize = 0; 
    int index = 0; 

    std::cout << "Input numbers (enter -1 to output and stop): " << std::endl;
    while (true) {
        int num;
        std::cout << "Input number: ";
        std::cin >> num;

        if (num == -1) {
            std::cout << "Output: ";
            for (int i = 0; i < currentSize; ++i) {
                std::cout << db[(index - currentSize + i + maxSize) % maxSize] << " ";
            }
            std::cout << std::endl;
            break;
        }

        db[index] = num;
        index = (index + 1) % maxSize;
        if (currentSize < maxSize) {
            currentSize++;
        }
    }

    return 0;
}
