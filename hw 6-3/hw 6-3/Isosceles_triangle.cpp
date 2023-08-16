#include <iostream>
#include "Isosceles_triangle.h"
Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = a;
		this->A = A;
		this->B = B;
		this->C = A;
		name = "равнобедренный треугольник";
	}