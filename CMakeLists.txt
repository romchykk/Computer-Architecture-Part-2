# Мінімальна версія CMake
cmake_minimum_required(VERSION 3.10)

# Назва проєкту
project(CalculatorApp)

# 1. Створюємо статичну бібліотеку з файлу calculator.cpp
add_library(calculator_lib STATIC calculator.cpp)

# 2. Створюємо виконуваний файл з файлу main.cpp
add_executable(calculator_app main.cpp)

# 3. Підключаємо (лінкуємо) нашу бібліотеку до виконуваного файлу
target_link_libraries(calculator_app calculator_lib)