#include <iostream>
#include <string>
using namespace std;

pair<int, int> calculateBullsAndCows(const string& secret, const string& guess) {
    int bulls = 0;
    int cows = 0;
    int digitsSecret[10] = {0};  
    int digitsGuess[10] = {0};   

    for (int i = 0; i < 4; ++i) {
        if (secret[i] == guess[i]) {
            bulls++;
        } else {
            digitsSecret[secret[i] - '0']++;
            digitsGuess[guess[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        cows += min(digitsSecret[i], digitsGuess[i]);
    }

    return {bulls, cows};
}

int main() {
    string secret, guess;
    cout << "Введите задуманное число: ";
    cin >> secret;
    cout << "Введите второе число: ";
    cin >> guess;

    if (secret.length() != 4 || guess.length() != 4) {
        cout << "Ошибка: оба числа должны быть четырёхзначными." << endl;
        return 1;
    }

    auto [bulls, cows] = calculateBullsAndCows(secret, guess);
    cout << "Быков: " << bulls << ", коров: " << cows << endl;

    return 0;
}
