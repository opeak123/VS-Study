#include <iostream>

class Player
{
private:
	int x, y;
	int speed;



public:
	Player(int x, int y, int speed)
		: x{ x }, y{ y }, speed{ speed }
	{

	}

	void Move(int dx, int dy)
	{
		x += dy * speed;
		y += dy * speed;
	}

	void ShowPosition()
	{
		std::cout << x << "x" << std::endl;
		std::cout << y << "y" << std::endl;

	}
};

class PlayerHandler
{
private:
	Player* playerList[50];
	int playerNum;

public:
	PlayerHandler() : playerNum{0} 
	{

	}
	void AddPlayer(Player* p)
	{
		playerList[playerNum++] = p;
	}

	void ShowAllPlayerPosition() const
	{
		for (int i = 0; i < playerNum; i++)
		{
			playerList[i]->ShowPosition();
		}
	}
	~PlayerHandler()
	{
		for (int i = 0; i < playerNum; i++)
		{
			delete playerList[i];
		}
	}


};


int main()
{
	PlayerHandler playerHandler;
	playerHandler.AddPlayer(new Player(1,1,1));
	playerHandler.AddPlayer(new Player(5, 5, 1));
	playerHandler.AddPlayer(new Player(2, 3, 1));



	return 0;
}