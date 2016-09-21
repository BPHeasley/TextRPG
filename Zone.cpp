#include "Zone.h"



Zone::Zone()
{
}

Zone::Zone(std::string name)
{
	mName = name;
	mAreas.push_back(mName);
	generateAreas();
}

Zone::~Zone()
{
}

void Zone::generateAreas()
{
	/*	
	Each zone will have a random number of areas
	between 4 and 10 (these numbers are arbitrary)
	PLUS 1 boss battle room
	*/
	mNumAreas = (rand() % 4) + 6;
	for (int i = 0; i < mNumAreas; i++)
	{
		mAreas[i] = Area(mName);
	}
}