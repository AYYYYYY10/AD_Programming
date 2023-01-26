#pragma once
#include  <string>

#include "ENEMY.h"

class UNDEAD : public ENEMY
{
public:
	std::string SpeciesName;
	int Taunts[10];

private:
	void TauntPlayer()
	{

	}

};
