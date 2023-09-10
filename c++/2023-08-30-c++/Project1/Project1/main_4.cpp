#include <iostream>


int func2(int x, int y, int z)
{
	x += y + z;
	return x;
}

int func1(int a, int b)
{
	int result;

	result = a + b;
	result = func2(result, a, b);

	return result;
}




void main()
{
	int x = 10;
	int y = 20;
	int z;
	
	z = func1(x, y);

	std::cout << z << std::endl;

}