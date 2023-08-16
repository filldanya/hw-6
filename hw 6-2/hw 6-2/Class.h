#pragma once


class Counter {
private:
	int num = 1;
public:
	void inc();
	void dec();
	void out();
	void set_num(int);
};