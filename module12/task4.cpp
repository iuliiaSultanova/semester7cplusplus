#include <iostream>

int findDuplicate(const int arr[], int size) {
    int sumArray = 0;
    int minVal = arr[0];
    
    for (int i = 0; i < size; ++i) {
        sumArray += arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    
    int expectedSum = (minVal + (minVal + 14)) * 15 / 2;
    
    return sumArray - expectedSum;
}

int main() {
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    
    int duplicate = findDuplicate(numbers, 15);
    std::cout << "Повторяющееся число: " << duplicate << std::endl;

    return 0;
}
