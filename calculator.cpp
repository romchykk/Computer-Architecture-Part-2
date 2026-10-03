#include "calculator.h"
#include <iostream> // Потрібно для виведення в консоль


int Calculator::Add(double a, double b)
{
    return a + b + 0.5; // Додавання 0.5 для округлення до цілого
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    return a * b + 0.5; // Округлення
}

int Calculator::Dil(double a, double b)
{
    if (b != 0) {
        return a / b; // Поверне цілу частину від ділення
    }
    return 0; // Обробка ділення на нуль
}
