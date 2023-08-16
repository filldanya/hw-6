#pragma once
#include <iostream>
#include "Figure.h"
class Triangle : public Figure {
protected:
	int a, b, c;
	int A, B, C;
	std::string name = "Треугольник";
public:

	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
	Triangle(int a, int b, int c, int A, int B, int C);
	std::string get_name();
	Triangle();
	void print_info();
};