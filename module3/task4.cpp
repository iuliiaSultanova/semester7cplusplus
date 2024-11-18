#include <iostream>

int main() {
    int a = 42; 
    int b = 153; 

    std::cout << "До обмена:\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    a = a + b; 
    b = a - b; 
    a = a - b; 

    std::cout << "После обмена:\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    return 0;
}