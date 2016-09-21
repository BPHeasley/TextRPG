#pragma once
#include <string>
#include <vector>
#include <random>
#include "Enemy.h"
class Area
{
	/*
	Area generates the enemy in the area when it is created in the Zone class
	mAreaCleared tells if the area has been cleared of the Enemy
	mExits is a vector containing the strings of the directions that lead out of the Area
	*/
public:
	Area();
	Area(std::string zone);
	~Area();

	Enemy getAreaEnemy() { return mAreaEnemy; }
	bool isAreaCleared() { return mAreaCleared; }
private:
	bool mAreaCleared;
	std::vector<std::string> mExits;
	Enemy generateEnemy(std::string zone);
	Enemy mAreaEnemy;
	std::string zone;
};

