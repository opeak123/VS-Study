#include <iostream>
#include <string>
class Point
{
public:
	bool operator>(const Point& rhs)
	{
		return true;
	}
};

template <typename T1, typename T2>
class Item
{
private:
	T2 name;
	T1 value;

public:
	Item(T2 name, T1 value)
		:name{name} , value{value} {}

	T2 GetName() const
	{
		return name;
	}

	T1 GetValue() const
	{
		return value;
	}

};

template <typename T1>
class Item <T1, double>
{
private:
	T1 name;
	double value;

public:
	Item(T1 name, double value)
		:name{ name }, value{ value } {}

	T1 GetName() const
	{
		return name;
	}

	double GetValue() const
	{
		return 2 * value;
	}
};


template <typename T> 
T myMax(T a, T b)
{
	return (a > b) ? a : b;
}

template <>
std::string myMax(std::string a, std::string b)
{
	return (a.length() > b.length()) ? a : b;
}


template <typename T, int N>
class Array
{
private:
	int size = N;
	T value[N];
};


class Array<int, 5>
{
private:
	int size = 5;
	int value[5];
};

int main(void)
{
	int a = 5;
	int b = 10;

	double c = 1.234;
	double d = 3.456;


	Point p1;
	Point p2;

	std::string e = "cdeddd";
	std::string f = "abcd";

	//std::cout << myMax<std::string>(e, f) << std::endl;
		

	std::string h = "abcd";

	Item<int , std::string> i = { "A" , 10 };
	Item<double, std::string > g = { "B" , 20.5 };
	Item<std::string, std::string> aa = { "B" , "hello" };

	Item< std::string , double> kio = { "di", 40.5};

	std::cout << i.GetName() << std::endl;
	std::cout << i.GetValue() << std::endl;
 
	std::cout << g.GetName() << std::endl;
	std::cout << g.GetValue() << std::endl;

	std::cout << aa.GetName() << std::endl;
	std::cout << aa.GetValue() << std::endl;

	std::cout << kio.GetName() << std::endl;
	std::cout << kio.GetValue() << std::endl;

	Array<std::string, 5> df;
	Array<double, 10> fgfg;


	return 0;
}