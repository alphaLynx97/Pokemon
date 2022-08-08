#pragma once
#include "pokemon.h"

class move
{
public:
	uint32_t damageDealt = 0;
	uint32_t healingDone = 0;
	uint32_t turnsEffective = 0; //How long the move persists
	virtual void useMove() {};
};

class scratch :public move
{
public:
	void useMove()
	{

	}
};
