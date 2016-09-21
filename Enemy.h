#pragma once
#include "Character.h"
#include "Skill.h"
#include <vector>
class Enemy :
	public Character
{
public:
	Enemy();
	~Enemy();
	void setEnemy(std::string enemyName);

	std::string getName() { return mName; }
private:
	int mHealth;
	int mResource;
	std::string mResourceName;
	std::vector<Skill> mSkillList;
};

