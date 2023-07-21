#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]) {
    // Проверяем количество переданных аргументов
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <number1> <number2>" << std::endl;
        return 1;
    }

    // Преобразуем переданные аргументы в числа
    int number1 = std::atoi(argv[1]);
    int number2 = std::atoi(argv[2]);

    // Проверяем, является ли каждое из чисел целым числом
    if (number1 == 0 && argv[1][0] != '0') {
        std::cout << "Error: Number 1 is not an integer." << std::endl;
        return 1;
    }

    if (number2 == 0 && argv[2][0] != '0') {
        std::cout << "Error: Number 2 is not an integer." << std::endl;
        return 1;
    }

    // Выполняем операции над числами
    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;

    // Выводим результаты
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
