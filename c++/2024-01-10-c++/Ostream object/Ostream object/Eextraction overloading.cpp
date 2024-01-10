#include <iostream>
#include <string>

class Point
{
private:
	int xpos;
	int ypos;

public:
	Point(int x = 0, int y = 0)
		: xpos{ x }, ypos{ y } {}


	void ShowPosition()
	{
		std::cout << "xpos :" << xpos << std::endl;
		std::cout << "ypos :" << ypos << std::endl;
	}

	friend std::ostream& operator<<(std::ostream& os, const Point& rhs);
	/*{
		os << "xpos :" << rhs.xpos << std::endl;
		os << "ypos :" << rhs.ypos << std::endl;

		return os;
	}*/

	friend std::istream& operator>>(std::istream& is, Point rhs);

	void operator<<(std::ostream& os)
	{
		os << xpos << " , " << ypos;
	}
};



//void operator<<(std::ostream& os, Point rhs)
//{
//
//}


//class MyOstream
//{
//public:
//	void operator<<(int val)
//	{
//		printf("%d", val);
//	}
//};


std::ostream& operator<<(std::ostream& os, const Point& rhs)
{
	os << "xpos :" << rhs.xpos << std::endl;
	os << "ypos :" << rhs.ypos << std::endl;

	return os;
}

std::istream& operator>>(std::istream& is, Point rhs)
{
	int x = 0;
	int y = 0;
	is >> x >> y;

	rhs = Point{ x, y };

	return is;
}



int main()
{
	Point p1{ 1,2};
	Point p2{ 3,4 };
	Point p3{ 4,5 };
	//std::cin >> p1 >> p2 >> p3;		//operator>>(cin,p1);

	return 0;

}