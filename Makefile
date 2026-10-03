# Компілятор та прапорці
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Назви цілей
APP = calculator_app
LIB = libcalculator.a

# Головна ціль: збираємо і програму, і бібліотеку
all: $(APP)

# Збираємо виконуваний файл, лінкуючи його з бібліотекою
$(APP): main.o $(LIB)
	$(CXX) $(CXXFLAGS) -o $(APP) main.o -L. -lcalculator

# Створюємо статичну бібліотеку
$(LIB): calculator.o
	ar rcs $(LIB) calculator.o

# Компілюємо об'єктний файл main.o
main.o: main.cpp calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Компілюємо об'єктний файл calculator.o
calculator.o: calculator.cpp calculator.h
	$(CXX) $(CXXFLAGS) -c calculator.cpp

# Ціль clean для очищення згенерованих файлів (обов'язкова вимога)
clean:
	rm -f *.o $(LIB) $(APP)