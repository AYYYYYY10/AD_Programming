#pragma once
#include <string>

#include "ENEMY.h"

class ORC : public ENEMY
{
public:
	std::string SpeciesName;
	int Taunts[10];

private:
	void TauntPlayer()
	{

	}
};
