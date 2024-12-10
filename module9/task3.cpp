#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    int wordCount = 0;
    stringstream ss(input);
    string word;
    
    while (ss >> word) {
        wordCount++;
    }

    cout << "Ответ: " << wordCount << endl;
    return 0;
}
