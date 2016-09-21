#pragma once
#include <string>
class Skill
{
public:
	Skill();
	Skill(std::string mSkillName);
	~Skill();
private:
	std::string mSkillName;
	int mCost;
};

