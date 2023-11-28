//#include <iostream>
//
//
//class Player
//{
//
//public:
//
//	Player(int x, int y, int speed)
//		: x{ x }, y{ y }, speed{ speed }
//	{
//		std::cout << this << std::endl;
//	}
//
//	void SetPosition(int x, int y, int speed) 
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void PrintPosition() const
//	{
//		std::cout << x << "x" << std::endl;
//		std::cout << y << "y" << std::endl;
//	}
//
//private: 
//	int x;
//	int y;
//	int speed;
//};
//
//
//
//int main()
//{ 
//
//	const Player p (1,2,3);
//	p.PrintPosition();
//	
//	return 0;
//}