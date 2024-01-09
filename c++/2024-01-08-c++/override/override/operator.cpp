#include <iostream>

class Point
{
private: 
	int xPos;
	int yPos;

public:
	Point(int x = 0, int y = 0)
		:xPos{ x }, yPos{ y } {}

	void ShowPosition() const
	{
		std::cout << "xPos" << xPos << std::endl;
		std::cout << "yPos" << yPos << std::endl;
	}

	Point operator+(const Point& p) const
	{
		Point result = { xPos + p.xPos , yPos + p.yPos };
		return result;
	}

	bool operator==(const Point& p) const
	{
		if (xPos == p.xPos && yPos == p.yPos)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	Point operator-() const
	{

	}

	Point operator*() const
	{

	}
	Point operator++() const
	{

	}

};

int main()
{
	const Point p1{ 1,1 };
	Point p2{ 1,1 };

	if (p1 == p2)
	{
		std::cout << "same" << std::endl;
	}
	return 0;
}