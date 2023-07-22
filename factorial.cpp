#include <iostream>
using namespace std;

// Функция для вычисления факториала числа с использованием рекурсии
unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    cout << "Введите число, для которого нужно найти факториал: ";
    unsigned int num;
    cin >> num;

    if (num < 0) {
        cout << "Факториал отрицательного числа не определен." << endl;
    } else {
        unsigned long long result = factorial(num);
        cout << "Факториал числа " << num << " равен: " << result << endl;
    }

    return 0;
}
