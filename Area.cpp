#include "Area.h"



Area::Area()
{
}

Area::Area(std::string zone)
{
	mAreaEnemy = generateEnemy(zone);
}


Area::~Area()
{
}

Enemy Area::generateEnemy(std::string zone)
{
	int randEnemy = rand() % 5;
	Enemy enemy;
	if (zone == "Forest")
	{
		switch (randEnemy)
		{
		case 0:
			enemy.setEnemy("Giant Spider");
			break;
		case 1:
			enemy.setEnemy("Kobold");
			break;
		case 2:
			enemy.setEnemy("Ogre");
			break;
		case 3:
			enemy.setEnemy("Orc");
			break;
		case 4:
			enemy.setEnemy("Bandit");
			break;
		default:
			enemy.setEnemy("");
			break;
		}
	}
	else if (zone == "Cave")
	{

	}
	else if (zone == "Tower")
	{

	}
	else
	{

	}
	return enemy;
}