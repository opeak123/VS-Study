#include <iostream>


class Entity
{
private:

	int x;
	int y;

public:

	Entity(int x, int y)
		: x{ x }, y{ y } {}

	void Talk()
	{
		std::cout << "Hello, I'm Entity Talk()" << std::endl;
	}

	void ShowPosition()
	{
		std::cout << x << "," << y << "," << std::endl;

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
		:Entity{ x,y }, speed{ speed } {}

	void Move(int dx, int dy)
	{
		hp += dx;
		xp += dy;
		Entity::Talk();
	}

	void Talk()
	{
		std::cout << "Hello, I'm Player Talk()" << std::endl;
	}
};



int main(void)
{
	Entity p = Player{ 1,2,3 };
	Entity* ePtr = new Player{ 4,5,6 };

	Entity& eRef = p;

	eRef.ShowPosition();
	eRef.Talk();


	Player ps = { 7,8,9 };

	ps.ShowPosition();
	ps.Talk();





	return 0;
}