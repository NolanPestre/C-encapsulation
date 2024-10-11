#include "Vecteur2.h"

Vecteur2::Vecteur2(float x, float y) : _x(x), _y(y)
{
}


void Vecteur2::SetX(float x)
{
	_x = x;
}

void Vecteur2::SetY(float y)
{
	_y = y;
}

float Vecteur2::GetX()
{
	return _x;
}

float Vecteur2::GetY()
{
	return _y;
}
