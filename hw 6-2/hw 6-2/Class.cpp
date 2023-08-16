#include <iostream>
#include "Class.h"


	void Counter::inc() {
		num++;
	}
	void Counter::dec() {
		num--;
	}
	void Counter::out() {
		std::cout << num << std::endl;
	}
	void Counter::set_num(int num) {
		this->num = num;
	}