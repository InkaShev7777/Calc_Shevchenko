#include <iostream>
#include"c_Calc.h"
int main()
{
	
	c_Calc c_calc(2,2);
	std::cout<<c_calc.plus(2,5);
	std::cout << "\n";
	std::cout << c_calc.minus(10,5);
	std::cout << "\n";
	std::cout << c_calc.multiplication(5, 5);
	std::cout << "\n";
	std::cout << c_calc.division(20, 2);
}

