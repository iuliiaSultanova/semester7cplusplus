#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidFloat(const string& input) {
    bool hasDigit = false;
    bool hasDecimalPoint = false;
    int length = input.length();

    for (int i = 0; i < length; ++i) {
        if (i == 0 && input[i] == '-') continue;  
        if (input[i] == '.') {
            if (hasDecimalPoint) return false;  
            hasDecimalPoint = true;
        } else if (isdigit(input[i])) {
            hasDigit = true;
        } else {
            return false;  
        }
    }

    return hasDigit;  
}

int main() {
    string input;
    cout << "Введите число: ";
    cin >> input;

    if (isValidFloat(input)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
