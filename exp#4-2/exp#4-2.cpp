#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	int x;
	std::cin >> x;

	switch (x) {
	case 5: 
		std::cout << "X is 5"; 
		break;
	case 50:
		std::cout << "X is 50";
		break;
	case 45:
		std::cout << "X is 45";
		break;
	case 30:
		std::cout << "X is 30";
		break;
	case 20:
		std::cout << "X is 20";
		break;
	default: std::cout << "default";
		break;
	}
	
	return 0;
}