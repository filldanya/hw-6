#include <iostream>
#include <cstring>
#include "windows.h"
#include "Class.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	Counter value;
	int num;
	std::string answer;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> answer;
	if (answer == "��") {
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> num;
		value.set_num(num);
	}
	char command;
	int a = 1;
	while (a) {

		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> command;
		if (command == '+') {
			value.inc();
		}
		else if (command == '-') {
			value.dec();
		}
		else if (command == '=') {
			value.out();
		}
		else if (command == 'x') {
			a = 0;
		}
	}
}