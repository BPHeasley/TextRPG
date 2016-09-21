#pragma once
#include "Character.h"
#include "Skill.h"
#include "Inventory.h"
class Player :
	public Character
{
public:
	Player();
	~Player();
private:
	int health;

};

