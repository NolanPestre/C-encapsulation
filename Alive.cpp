#include "Alive.h"

Alive::Alive(float HpMax) : LifeMax(HpMax) , LifeNow(HpMax)
{
}

float Alive::GetLifeM()
{
	return LifeMax;
}

float Alive::GetLifeN()
{
	return LifeNow;
}

void Alive::TakeDammage(float Dammage)
{
	LifeNow -= Dammage;
}

bool Alive::IsAlive()
{
	if (LifeNow<=0) {
		return false ;
	}
	return true;
}
