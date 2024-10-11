#pragma once
#include "Vecteur2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"




class Mob:public Entity, public Alive, public AMovable
{
protected:
	Vecteur2 v;

public:
	Mob b(float x, float y, float HpMax, float HpNow, Vecteur2 direc);
};

