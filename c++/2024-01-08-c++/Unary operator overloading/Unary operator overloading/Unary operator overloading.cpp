//#include <iostream>
//
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x = 0, int y = 0)
//		: xpos {x} , ypos {y} {}
//
//
//	void ShowPosition()
//	{
//		std::cout << "xpos :" << xpos << std::endl;
//		std::cout << "ypos :" << ypos << std::endl;
//	}
//
//	bool operator==(const Point& p) const
//	{
//		if (xpos == p.xpos && ypos == p.ypos)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//
//	Point operator+(const Point& p) const
//	{
//		Point result{ xpos + p.xpos , ypos + p.ypos };
//		return result;
//	}
//
//	Point operator-(const Point& p) const
//	{
//		std::cout << "operator- called" << std::endl;
//		return Point{ xpos - p.xpos , ypos - p.ypos };
//	}
//};
//
//
//
//int main()
//{
//	Point p1{ 10, 10 };
//	Point p2{ 5,5 };
//
//	Point p3 = p1 - p2;
//	p3.ShowPosition();
//
//	p1 == p2;
//
//	return 0;
//}