#include <iostream>

class Entity
{

protected:
	int x, y;

public:

	Entity(int x, int y)
		:x{x}, y{y} {}

	virtual ~Entity()
	{
		std::cout << " Entity virtual Destructor called " << std::endl;
	}


	virtual void Move(int dx, int dy)
	{
		x += dx;
		y += dy;
	}

	void PrintPos()
	{
		std::cout << x << "," << y <<std::endl;
	}

};

class Player : public Entity
{
private:
	int hp;
	int xp;

public:
	Player(int x, int y, int hp, int xp)
		:Entity {x,y}, hp{hp}, xp{xp}
	{

	}
	virtual ~Player()
	{
		std::cout << " Player virtual Destructor called " << std::endl;
	}
	void Move(int dx, int dy) override
	{
		x += dx * 2;
		y += dy * 2;

	}

	/*void Move(int dx, int dy) override
	{

	}*/
};



int main(void)
{
	Entity* e = new Player{ 1,2,3,4 };
	e->Move(1,1);
	delete e;


	return 0;
}