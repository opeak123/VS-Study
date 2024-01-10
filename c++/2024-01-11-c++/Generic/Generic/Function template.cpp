//#include <iostream>
//
//class Point
//{
//public:
//	bool operator>(const Point& rhs)
//	{
//		return true;
//	}
//};
//
//template <typename T1, typename T2>
//T1 max(T1 a, T2 b)
//{
//	return a > b ? a : b;
//}
//
//template <typename T1, typename T2>
//void func(T1 a, T2 b)
//{
//	std::cout << a << "\n" << b << std::endl; }
//
//
//
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
////Point max(Point a, Point b)
////{
////	return a > b ? a : b;
////}
//
//
//int main(void)
//{
//	int a = 5;
//	int b = 10;
//
//	//std::cout << max<int>(a, b) << std::endl;
//
//
//	double c = 1.234;
//	double d = 3.456;
//
//	//std::cout << max<double>(a, c) << std::endl;;
//	func((int)a, (double)c);
//	func<int, double>(a, c);
//	func('A', 12.4);
//
//	Point p1;
//	Point p2;
//
//	max<Point>(p1, p2);
//
//	return 0;
//}