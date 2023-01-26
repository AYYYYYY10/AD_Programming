#pragma once
#include <string>

#include "PLAYER.h"


class WIZARD : public PLAYER
{
public:
	std::string SpecialAttackName;
	std::string SpecialAttackAmount;
private:
	void SpecialAttack()
	{

	}

};
