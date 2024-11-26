#include <iostream>
#include <string>

int main() {
    int day;
    
    std::cout << "Введите день недели (от 1 до 7): ";
    std::cin >> day;

    std::string drink = "Морс";

    if (day < 1 || day > 7) {
        std::cout << "Ошибка: введите номер дня от 1 до 7.\n";
        return 1;
    }

    std::cout << "Меню сегодня (";
    switch(day) {
        case 1:
            std::cout << "понедельник):\n";
            std::cout << "Борщ\nСалат \"Греческий\"\nГовядина с овощами\n";
            break;
        case 2:
            std::cout << "вторник):\n";
            std::cout << "Харчо\nСалат \"Оливье\"\nБаварские колбаски с капустой\n";
            break;
        case 3:
            std::cout << "среда):\n";
            std::cout << "Щи\nСалат \"Мимоза\"\nСвиная отбивная с картофелем\n";
            break;
        case 4:
            std::cout << "четверг):\n";
            std::cout << "Гороховый суп\nСалат \"Цезарь\" с креветками\nКуриная ножка с пюре\n";
            break;
        case 5:
            std::cout << "пятница):\n";
            std::cout << "Рассольник\nСалат \"Столичный\"\nРыба с рисом\n";
            break;
        case 6:
            std::cout << "суббота):\n";
            std::cout << "Солянка\nСалат \"Крабовый\"\nШашлык из свинины\n";
            break;
        case 7:
            std::cout << "воскресенье):\n";
            std::cout << "Уха\nСалат из свежих овощей\nЖаркое по-домашнему\n";
            break;
    }

    std::cout << drink << "\n";

    return 0;
}
