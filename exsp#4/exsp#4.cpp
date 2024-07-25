#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int x;
	std::cout << "Введите число: ";
	std::cin >> x;
	bool is_has_car = true;
	if (x >= 3 && is_has_car) {
		std::cout << "Число больше или равно 3";
		if (x == 5) {
			std::cout << " Число равно 5";
		}
		else {

		}
	}
	else if (x == 2) {
		std::cout << "Число равно 2";
	}
	else {
		std::cout << "Сработал else";
	}

	return 0;
}