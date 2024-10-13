#pragma once
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
class Mob : public Entity , public Alive , public AMovable , public Vector2
{
public:
	Mob(float x, float y, float hpmax, float hp, Vector2 direction, float s);
	virtual void TakeDamage(float damage) override;
	virtual void Move(Vector2 direction, float s) override;
};
