#include "Game.h"



Game::Game()
{
}


Game::~Game()
{
}

std::string Game::displayCurrentZone(int mCurrentZone)
{
	mZoneName = mZones[mCurrentZone].getZoneName();
	return mZoneName;
}