//#include <iostream>
//
//
//class Base
//{
//private: 
//	int value;
//
//public:
//	Base()
//	{
//		std::cout << "Base Contructors " << std::endl;
//	}
//	Base(const Base& other)
//		: value {other.value}
//	{
//		
//	}
//	Base(int x)
//		:value{x}
//	{
//		std::cout << "Base (int) overloaded Contructors " << std::endl;
//	}
//	~Base()
//	{
//		std::cout << "Base Destructors " << std::endl;
//	}
//};
//
//class Derived : Base
//{
//private:
//	int doubled_value;
//
//public:
//	Derived()
//	{
//		std::cout << "Drived Contructors " << std::endl;
//	}
//
//	Derived(int x)
//		:Base{ x }, doubled_value{x}
//	{
//		std::cout << "Drived (int) overloaded Contructors " << std::endl;
//	}
//	Derived(const Derived& other)
//		:Base{ other }, doubled_value {other.doubled_value}
//	{
//
//	}
//	~Derived()
//	{
//		std::cout << "Drived Destructors " << std::endl;
//	}
//}; 
//
//
//int main(void)
//{
//	//Base a;
//	//a;
//	//Drived a;
//	Derived b = { 1 };
//
//	
//
//
//	return 0;
//}