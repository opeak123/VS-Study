#include <iostream>



int main()
{

	int a = 10;
	int b = 20;
	double result = 0;

	 
	//result = (a > b) ? ++a : --b;
	//result = (a < b) ? (b - a) : (a - b);
	result = (b != 0) ? ((float)a / (float)b) : 0;

	std::cout << (float)result;




	return 0;
}