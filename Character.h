#pragma once
#include <string>
class Character
{
public:
	Character();
	~Character();
	std::string getName() { return mName; }
protected:
	std::string mName;
};

