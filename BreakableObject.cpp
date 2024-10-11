#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float x, float y, float hpmax) : Alive(hpmax)
{
	SetPosXY(x, y);
	std::cout << '\n' << "Breakable Object just created at x = " << GetPosX() << " and y = " << GetPosY() << " with " << GetLifeN()<<'/'<<GetLifeM();
}

void BreakableObject::TakeDammage(float Dammage)
{
	LifeNow -= Dammage;
	if (LifeNow <=0 ){
		std::cout << '\n' <<"Breakable Object just broke" ;
	}
}
