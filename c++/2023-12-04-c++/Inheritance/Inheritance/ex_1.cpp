#include <iostream>


class Entity
{
protected:
	int x, y;


public:
	Entity(int x, int y)
		:x{ x }, y{ y } {}

	void ShowPosition()
	{
		std::cout << "[" << x << "," << y << "]" << std::endl;
	}
	void Talk()
	{
		std::cout << "Hello" << std::endl;
	}
};

class Player : public Entity
{
private:
	int hp;
	int xp;
	int speed;


public:
	Player(int x, int y, int speed)
		:Entity{x,y}, speed {speed} {}

	void Move(int dx, int dy)
	{
		x += dx;
		y += dy;
	}
};



int main()
{
	Entity e(1, 1);
	e.ShowPosition();
	e.Talk();

	Player p{ 5,5,10 };
	p.Move(5, 5);
	p.ShowPosition();
	p.Talk();

	return 0;
}