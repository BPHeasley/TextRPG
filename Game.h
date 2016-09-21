#pragma once
#include <string>
#include <vector>
#include "Zone.h"
#include "Player.h"
#include "Combat.h"
#include "Action.h"
#include "time.h"

class Game
{
	/*
	The Game class is the base class for the entire game application
	Contains the entire game
	Zones
	Player
	Actions
	*/
public:
	Game();
	~Game();
	std::string displayCurrentZone(int mCurrentZone);
private:
	int mCurrentZone;
	std::string mZoneName;
	std::vector<Zone> mZones = { Zone("Forest"), Zone("Cave"), Zone("Tower"), Zone("Castle") };
};

