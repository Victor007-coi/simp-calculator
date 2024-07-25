#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    // использование переменных
    int a, b;
    std::cout << "Введите переменную a: ";
    std::cin >> a;

    std::cout << "Введите переменную b: ";
    std::cin >> b;

    std::cout << "A: " << a << ". B: " << b;
    
    // Типы данных
    short num1 = 7; // 2 byte / -32000 до 32000
    int num2 = 5; // 4 byte / -2B - 2B
    long num3 = 5; // 8 byte / 

    unsigned short num4 = 7; // 2 byte / -0 до 65000
    unsigned int num5 = 5; // 4 byte / 0 - 4B
    unsigned long num6 = 5; // 8 byte / 0 - 

    // Числа с точкой
    float num7 = 5.4516845f;
    double num8 = 454.4868468184681684681f;

    // Хранение символа
    char sym = '&';

    bool isHappy = true; // логическая функция

    return 0;
}