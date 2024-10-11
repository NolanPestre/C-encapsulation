#pragma once*
#include "Alive.h"

class IAttacker
{
public:
	virtual void attaque(Alive* vie, float);
};

