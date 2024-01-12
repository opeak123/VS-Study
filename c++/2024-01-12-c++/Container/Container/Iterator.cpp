#include <iostream>
#include <vector>
#include <set>
int main(void)
{
	std::vector<int> vec{ 1,2,3 };

	/*std::set<int> mySet{ 1,2,3 };

	std::vector<int>::iterator it1;

	std::set<int>::iterator it2;

	std::set<char> ch {'A', 'B', 'C', 'D'};*/



	/*for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << std::endl;
	}*/

	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	
	int a = 5;
	auto b = 5.1;

	auto it = vec.begin();
		


	return 0;
} 