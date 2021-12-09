#include "c_Calc.h"
#include<iostream>
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

void c_Calc::smaller(int a , int b) const
{
	if (a < b)
	{
		std::cout << a;
	}
	else
	{
		std::cout << b;
	}
}

void c_Calc::bigger(int a, int b) const
{
	if (a > b)
	{
		std::cout << a;
	}
	else
	{
		std::cout << b;
	}
}
