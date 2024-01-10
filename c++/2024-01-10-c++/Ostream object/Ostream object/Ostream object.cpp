//#include <iostream>
//
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x = 0, int y = 0)
//		: xpos{ x }, ypos{ y } {}
//
//
//	void ShowPosition()
//	{
//		std::cout << "xpos :" << xpos << std::endl;
//		std::cout << "ypos :" << ypos << std::endl;
//	}
//
//	friend void operator<<(std::ostream& os, const Point& rhs);
//};
//
//
//
////void operator<<(std::ostream& os, Point rhs)
////{
////
////}
//
//
////class MyOstream
////{
////public:
////	void operator<<(int val)
////	{
////		printf("%d", val);
////	}
////};
//
//
//void operator<<(std::ostream& os, const Point& rhs)
//{
//	os << "xpos :" << rhs.xpos << std::endl;
//	os << "ypos :" << rhs.ypos << std::endl;
//}
//
//int main()
//{
//	Point p1{ 10 , 20 };
//
//	std::cout << p1;
//
//
//	return 0;
//
//}