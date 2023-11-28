#include <iostream>


class Player
{

public:

	Player(int x, int y, int speed)
		: x{ x }, y{ y }, speed{ speed }
	{
		std::cout << this << std::endl;
	}

	void SetPosition(int x, int y, int speed)
	{
		this->x = x;
		this->y = y;
	}

	void PrintPosition() const
	{
		std::cout << x << "x" << std::endl;
		std::cout << y << "y" << std::endl;
	}

	static int NUM()
	{
		return sNum;
	}
private:
	int x;
	int y;
	int speed;
	static int sNum;
};

int Player::sNum = 5;

int main()
{
	const Player p1(1, 2, 3);
	Player::NUM();
	std::cout << Player::NUM() << std::endl;
	const Player p2(1, 2, 3);


	return 0;
}