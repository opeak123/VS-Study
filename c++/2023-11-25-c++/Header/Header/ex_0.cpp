//#include <iostream>
//
//class Player
//{
//public:
//	Player(int hp, int xp)
//		:hp{ hp }, xp{ xp }
//	{
//		std::cout << "생성자 호출됨" << std::endl;
//	}
//
//	//복사 생성자
//	Player(const Player& source);
//
//
//	void Print()
//	{
//		std::cout << hp << " " << xp << std::endl;
//	}
//private:
//	int hp;
//	int xp;
//};
//
//void PrintInformation(Player P)
//{
//	P.Print();
//}
//
//int main()
//{
//	Player p{ 10,2 };
//
//	PrintInformation(p);
//
//
//	return 0;
//}
//
//Player::Player(const Player& source)
//	:hp{ source.hp }, xp{ source.xp }
//{
//	std::cout << "복사 생성자 호출됨" << std::endl;
//}
