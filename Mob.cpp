#include "Mob.h"
#include <iostream>


Mob::Mob(float x, float y, float hpmax, float hp, Vector2 direction, float s) : Alive (hpmax, hp) , AMovable (direction, s) , Vector2(x,y), Entity (Vector2(x,y))
{
	std::cout << " Mob just created at x = " << GetPosX() << " and y = " << GetPosY() << " with maxlife = " << GetLifeM() << " and actuallife = " << GetLifeN() << " with direction x = " << direction.GetX() << " and y = " << direction.GetY () << std::endl;
}

void Mob::TakeDamage(float damage)
{
	HP -= damage;
	if (HP <= 0)
	{
		std::cout << " Mob just died " << std::endl;
	}
}

void Mob::Move(Vector2 direction, float s)
{
	Vector2 newpos (direction.GetX() * s + GetX (), direction.GetY() * s + GetY());
	std::cout << " Mob move to x = " << newpos.GetX() << " and y = " << newpos.GetY() << std::endl;
	direction = newpos;
}
