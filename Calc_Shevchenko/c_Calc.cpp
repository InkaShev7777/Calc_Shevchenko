#include "c_Calc.h"

c_Calc::c_Calc(int a, int b)
{
	this->a = a;
	this->b = b;
}

int c_Calc::plus(int a, int b)
{
	int s = a + b;
	return s;
}
