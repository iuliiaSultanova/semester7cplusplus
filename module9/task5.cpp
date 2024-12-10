#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
    string roman;
    
    pair<int, string> romanMap[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };
    
    for (auto &[value, symbol] : romanMap) {
        while (num >= value) {
            roman += symbol;
            num -= value;
        }
    }
    return roman;
}

int main() {
    int number;
    cout << "Введите число от 1 до 3999: ";
    cin >> number;

    if (number < 1 || number > 3999) {
        cout << "Ошибка: число должно быть в диапазоне от 1 до 3999." << endl;
        return 1;
    }

    string romanNumeral = intToRoman(number);
    cout << "Римская запись: " << romanNumeral << endl;

    return 0;
}
