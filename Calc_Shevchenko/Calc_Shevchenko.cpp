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
	std::cout << "\n";
	c_calc.smaller(5, 10);
	std::cout << "\n";
	c_calc.bigger(5, 6);
	std::cout << "\n";
	c_calc.division(4, 0);
}

