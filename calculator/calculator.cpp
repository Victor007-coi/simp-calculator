#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");

    float a, b, c;
    using namespace std;

    cout << "Введите число a: ";
    cin >> a;

    cout << "Введите число b: ";
    cin >> b;

    // знак математической операции + - * /
    char math_operation;

    cout << "Введите знак операции (+, -, *, /): ";
    cin >> math_operation;

    /* if (math_operation == '+') {
        c = a + b;
    }
    else if (math_operation == '-') {
        c = a - b;
    }
    else if (math_operation == '*') {
        c = a * b;
    }
    else if (math_operation == '/') {
        // Проверка на деление на ноль
        if (b != 0) {
            c = a / b;
        }
        else {
            cout << "Ошибка: Деление на ноль!" << endl;
            return 1; // Завершить программу с ошибкой
        }
    }
    else {
        cout << "Ошибка: Неверный знак операции!" << endl;
        return 1; // Завершить программу с ошибкой
    } */

    switch (math_operation)
    {
    case '+': c = a + b; break;
    case '-': c = a - b; break;
    case '*': c = a * b; break;
    case '/': if (b != 0) {
        c = a / b;
    }
            else {
        cout << "Ошибка: Деление на ноль!" << endl;
        return 1;
    }
            break;
    default: cout << "Ошибка: Неверный знак операции!" << endl;
        return 1;
        break;
    }

    cout << "Результат математической операции: " << c << endl;

    return 0;
}
