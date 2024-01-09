#include <iostream>

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

	bool operator==(const Point& p) const
	{
		if (xpos == p.xpos && ypos == p.ypos)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	Point operator+(const Point& p) const
	{
		Point result{ xpos + p.xpos , ypos + p.ypos };
		return result;
	}

	Point operator-(const Point& p) const
	{
		std::cout << "operator- called" << std::endl;
		return Point{ xpos - p.xpos , ypos - p.ypos };
	}

	Point operator-() const
	{
		return Point{ -xpos, -ypos };
	}
	friend Point operator*(const Point p, int val);
	friend Point operator*(int val , const Point p);

	/*{
		return Point{ p.xpos * val, p.ypos * val };
	}*/
};

Point operator*(const Point p, int val) 
{
	return Point{ p.xpos * val, p.ypos * val };
}

Point operator*(int val, const Point rhs)
{
	return Point{ rhs.xpos * val , rhs.ypos * val};
}

int main()
{
	Point p1{ 10, 10 };
	Point p2 = p1 * 3;
	//Point p2 = 3 * p1;

	Point p3 = -p1; // p1.operator-();
	p3.ShowPosition();
	return 0;
}