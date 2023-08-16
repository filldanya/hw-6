#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"


void print(Figure* figure) {
	figure->print_info();
}

int main() {
	setlocale(LC_ALL, "RUS");
	Figure* ptr;
	Triangle triangle(10, 20, 30, 50, 60, 70);
	print(&triangle);
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	print(&right_triangle);
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	print(&isosceles_triangle);
	Equilateral_triangle equilateral_triangle(30);
	print(&equilateral_triangle);
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	print(&quadrangle);
	Rectangle rectangle(10, 20);
	print(&rectangle);
	Square square(20);
	print(&square);
	Parallelogram parallelogram(20, 30, 30, 40);
	print(&parallelogram);
	Rhombus rhombus(30, 30, 40);
	print(&rhombus);
}