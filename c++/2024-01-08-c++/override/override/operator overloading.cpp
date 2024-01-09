//#include <iostream>
//
//
//class Number
//{
//private:
//	int val;
//
//public:
//	Number(int val)
//		:val{ val } {}
//
//	Number Add(Number b)
//	{
//		return Number{ val + b.val };
//	}
//
//	void Print()
//	{
//		std::cout << val << std::endl;
//	}
//
//	int GetValue()
//	{
//		return val;
//	}
//};
//
//
//
//Number Add(Number n1, Number n2)
//{
//	return Number{ n1.GetValue() + n2.GetValue() };
//}
//
//int main()
//{
//	Number n1{ 1 };
//	Number n2{ 2 };
//	Number n3 = n1.Add(n2);
//
//	n3.Print();
//
//
//	Number n4 = Add(n1,n2);
//	n4.Print();
//	return 0;
//}