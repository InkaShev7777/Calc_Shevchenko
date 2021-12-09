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

double c_Calc::division(int a, int b)
{
	int s;
	if (b != 0)
	{
		s = a / b;
		return s;
	}
	else
	{
		std::cout << "b == 0!!\n";
	}
	
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

bool c_Calc::rav(int a , int b)
{
	if(a == b)
	return true;
}

bool c_Calc::ne_rav(int a, int b)
{
	if(a!=b)
	return false;
}
