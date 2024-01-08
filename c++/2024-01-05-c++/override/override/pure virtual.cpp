//#include <iostream>
//
//class Entity
//{
//protected:
//	int x;
//	int y;
//
//public:
//	Entity(int x, int y)
//		:x{ x }, y{ y } {}
//
//	virtual ~Entity()
//	{
//		std::cout << "Entity Destructor Called" << std::endl;
//	}
//
//	/*virtual void Move(int dx, int dy)
//	{
//		x += dx;
//		y += dy;
//	}*/
//
//	virtual void PrintPosition() const //final
//	{
//		std::cout << "Entity : " << x << "," << y << std::endl;
//	}
//	virtual void Move(int dx, int dy) = 0;
//};
//
//
//class Player : public Entity
//{
//private:
//	int hp;
//	int xp;
//
//public:
//	Player(int x, int y, int hp, int xp)
//		: Entity{ x,y }, hp{ hp }, xp{ xp } {}
//
//	virtual ~Player()
//	{
//		std::cout << "Player Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy)
//	{
//		x += dx * 2;
//		y += dx * 2;
//	}
//
//	virtual void PrintPosition() const override
//	{
//		std::cout << "Player : " << x << "," << y << std::endl;
//	}
//
//	void Add();
//};
//
//
//int main()
//{
//	//Entity e(1, 1);
//	//Player p(1,1,1,1);
//	//p.Add();
//	return 0;
//}