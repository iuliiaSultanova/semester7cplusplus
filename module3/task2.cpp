#include <iostream>

int main() {
    int a = 42;
    int b = 153;

    std::cout << "До обмена:\n";
    std::cout << "a: " << a << "\n"; 
    std::cout << "b: " << b << "\n"; 

    int temp = a;
    a = b;
    b = temp;

    std::cout << "После обмена:\n";
    std::cout << "a: " << a << "\n"; 
    std::cout << "b: " << b << "\n"; 

    return 0;
}
