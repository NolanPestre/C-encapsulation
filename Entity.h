#pragma once
#include "Vecteur2.h"


class Entity
{
	protected:
		Vecteur2 v;
	public:
		Entity();

		virtual float GetPosX();
		virtual float GetPosY();
		virtual void SetPosXY(float x, float y);

};

