#include "StaticObject.h"
#include <iostream>

StaticObject::StaticObject(float x, float y)
{
	SetPosXY(x, y);
	std::cout << '\n' << "Static Object just created at x = " << GetPosX() << " and y = " << GetPosY() << std::endl;
}
