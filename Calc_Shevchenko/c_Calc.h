#pragma once
class c_Calc
{
	int a;
	int b;
public:
	c_Calc(int, int);
	int plus(int, int);
	inline int minus(int a, int b) {
		int s = a - b;
		return s;
	}
	

	
};

