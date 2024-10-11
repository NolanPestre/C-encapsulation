#include "Entity.h"

Entity::Entity() : v(0.f,0.f)
{
}

float Entity::GetPosX()
{
	return v.GetX();
}

float Entity::GetPosY()
{
	return v.GetY();
}


void Entity::SetPosXY(float x, float y)
{
	v.SetX(x);
	v.SetY(y);
}
