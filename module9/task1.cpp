#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

bool isValidTime(const string& time) {
    if (time.length() != 5 || time[2] != ':') return false;
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    return (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60);
}

int main() {
    string departureTime, arrivalTime;

    cout << "Введите время отправления (HH:MM): ";
    cin >> departureTime;
    cout << "Введите время прибытия (HH:MM): ";
    cin >> arrivalTime;

    if (!isValidTime(departureTime) || !isValidTime(arrivalTime)) {
        cout << "Ошибка: время введено некорректно." << endl;
        return 1;
    }

    int depHours = stoi(departureTime.substr(0, 2));
    int depMinutes = stoi(departureTime.substr(3, 2));
    int arrHours = stoi(arrivalTime.substr(0, 2));
    int arrMinutes = stoi(arrivalTime.substr(3, 2));

    int depTotalMinutes = depHours * 60 + depMinutes;
    int arrTotalMinutes = arrHours * 60 + arrMinutes;

    if (arrTotalMinutes < depTotalMinutes) {
        arrTotalMinutes += 24 * 60;  
    }

    int durationMinutes = arrTotalMinutes - depTotalMinutes;
    int hours = durationMinutes / 60;
    int minutes = durationMinutes % 60;

    cout << "Поездка составила " << hours << " ч. " << minutes << " мин." << endl;
    return 0;
}
