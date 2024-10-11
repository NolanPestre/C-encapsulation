#include "Mob.h"

Mob::Mob(float x, float y, float HpMax, float HpNow, Vecteur2 deplacement) : Alive(HpMax), AMovable( ),
{
	SetPosXY(x, y);
	LifeMax = HpMax;
	LifeNow = HpNow;
	deplacement = deplacer();
}
