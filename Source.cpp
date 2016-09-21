#include <iostream>
#include "Game.h"
#include "Zone.h"
#include "Area.h"
#include "Character.h"
#include "Enemy.h"
#include "Player.h"
#include "Inventory.h"
#include "Item.h"
#include "Skill.h"
#include "Action.h"

int main()
{
	srand(time(NULL));
	Game game;

	std::cout << game.mZones[0].mAreas[0].getAreaEnemy().getName() << " ";
	std::cin.get();
	std::cin.get();
	return 0;
}