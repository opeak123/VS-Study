#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
//struct Func
//{
//
//	void operator()(int x)
//	{
//		std::cout << x * x << std::endl;
//	}
//
//};

void f(int x)
{
	std::cout << x * x << std::endl;
}


int main(void)
{
	std::vector<int> vec = { 1,2,3 };
	std::set<char> ch = { 'A','B','D' };

	//f.operator()(3); //f(3) --> f.operator()(3)
					 //f[3] --> f.opeartor[](3)

	//f(3);
	//f(10);
	std::cout << &f << std::endl;
	std::for_each(vec.begin(), vec.end(), [](int x)
		{
			std::cout << x * x << std::endl;
		});




	return 0;
}