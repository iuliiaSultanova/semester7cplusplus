#include <iostream>
#include <algorithm>

int main() {
    int salary1, salary2, salary3;

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> salary1;
    std::cout << "Введите зарплату второго сотрудника: ";
    std::cin >> salary2;
    std::cout << "Введите зарплату третьего сотрудника: ";
    std::cin >> salary3;

    int minSalary = std::min({salary1, salary2, salary3});
    int maxSalary = std::max({salary1, salary2, salary3});
    int salaryDifference = maxSalary - minSalary;
    double averageSalary = (salary1 + salary2 + salary3) / 3.0;

    std::cout << "-----Считаем-----\n";
    std::cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей\n";
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << salaryDifference << " рублей\n";
    std::cout << "Средняя зарплата в отделе: " << averageSalary << " рублей\n";

    return 0;
}
