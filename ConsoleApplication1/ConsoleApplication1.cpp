#include <iostream>
#include <windows.h>
#include "Calculator.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    std::cout << "Приложение калькулятор с мелкомягкого сайта \n " << std::endl;
    std::cout << "Введи операцию типа А+В А-В А*В А/В" << std::endl;

    double x = 0;
    double y = 0;
    double result = 0;
    char operation = '+';

    Calculator c; 
    while (true) {
        cin >> x >> operation >> y;
		if (operation == '/' && y == 0) {
			std::cout << "Ошибка: Деление на ноль невозможно." << std::endl;
			continue;
		} 
        result = c.Calculate(x, y, operation);
        std::cout << "Результат: " << result << std::endl;
    }

}

double Calculator::Calculate(double x, double y, char operation)
{
    switch (operation)
    {

    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}