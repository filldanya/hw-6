#include "calc.h"
#include <iostream>


double add(double x, double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mult(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
}
double inv(double x, double y) {
	if (y == 0) {
		return 1;
	}
	for (int i = 0; i < y; i++) {
		x *= x;
	}
	return x;
}
