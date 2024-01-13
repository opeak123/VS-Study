#include <set>
#include <iostream>
#include <list>


template <typename T>
void PrintList(T x)
{
	for (auto it = x.begin(); it != x.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}


int main(void)
{
	std::set<char> set = { 'E','B','D','C','A'};
	//std::list<int> list = { 3,1,5,4,2};

	PrintList<std::set<char>>(set);

	set.insert('F');
	PrintList<std::set<char>>(set);

	std::cout << set.size() << std::endl;
	std::cout << !set.empty() << std::endl;

	return 0;
}