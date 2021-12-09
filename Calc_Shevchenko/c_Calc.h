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
	inline int multiplication(int a, int b) {
		int s = a * b;
		return s;
	}
	inline double division(int a, int b) {
		double s = a / b;
		return s;
	}
	void smaller(int, int)const;
	void bigger(int, int)const;
	

	
};

