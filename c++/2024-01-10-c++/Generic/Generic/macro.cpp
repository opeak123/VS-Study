#include <iostream>
#define MAX_SIZE 100
#define PI 3.14159
#define MAX(a,b) ((a>b)?a:b)

//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//double max(double a, double b)
//{
//	return a > b ? a : b;
//}

int main(void)
{
	double a = PI * 2;
	double b = PI * 4;


	int x = 100;
	int y = 200;

	double z = 1.234;
	double w = 3.456;

	std::cout << MAX(x, y) <<std::endl;
	std::cout << MAX(z, w);

	return 0;
}