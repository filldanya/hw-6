#include <iostream>
#include "calc.h"

enum class action {
	add = 1,
	sub,
	mult,
	div,
	inv
};
void math(action num, double x, double y) {
	switch (num)
	{
	case action::add:
		std::cout << x << " + " << y << " = " << add(x, y);
		break;
	case action::sub:
		std::cout << x << " - " << y << " = " << sub(x, y);
		break;
	case action::mult:
		std::cout << x << " * " << y << " = " << mult(x, y);
		break;
	case action::div:
		if (y == 0) {
			std::cout << "Error";
			break;
		}
		std::cout << x << " : " << y << " = " << div(x, y);
		break;
	case action::inv:
		std::cout << x << " в степени " << y << " = " << inv(x, y);
		break;
	default:
		std::cout << " Ќеправильный номер ";
		break;
	}
}

int main(){
	setlocale(LC_ALL, "RUS");
	double x;
	double y;
	int operation;
	std::cout << "¬ведите первое число: ";
	std::cin >> x;
	std::cout << "¬ведите второе число: ";
	std::cin >> y;
	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;
	math(static_cast<action>(operation), x, y);
}