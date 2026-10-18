#include <iostream>
#include "calculator.h"
int main()
{
    Calculator myCalc; // Створюємо об'єкт нашого калькулятора

    double num1 = 10.0;
    double num2 = 3.0;

    // Використовуємо методи калькулятора і виводимо результат
    std::cout << "Додавання: " << num1 << " + " << num2 << " = " << myCalc.Add(num1, num2) << std::endl;
    std::cout << "Віднімання: " << num1 << " - " << num2 << " = " << myCalc.Sub(num1, num2) << std::endl;
    std::cout << "Множення: " << num1 << " * " << num2 << " = " << myCalc.Mul(num1, num2) << std::endl;
    std::cout << "Ділення: " << num1 << " / " << num2 << " = " << myCalc.Dil(num1, num2) << std::endl;

    return 0; 
}