#include "Enemy.h"



Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}

void Enemy::setEnemy(std::string enemyName)
{
	mName = enemyName;
	if (enemyName == "Giant Spider")
	{
		mHealth = 60;
		mResource = 0;
		mResourceName = "";

	}
	else if (enemyName == "Kobold")
	{
		mHealth = 50;
		mResource = 40;
		mResourceName = "Mana";
	}
	else if (enemyName == "Ogre")
	{
		mHealth = 120;
		mResource = 0;
		mResourceName = "";
	}
	else if (enemyName == "Orc")
	{
		mHealth = 80;
		mResource = 0;
		mResourceName = "";
	}
	else if (enemyName == "Bandit")
	{
		mHealth = 60;
		mResource = 100;
		mResourceName = "Energy";
		mSkillList.push_back(Skill("Kick"));
	}
}