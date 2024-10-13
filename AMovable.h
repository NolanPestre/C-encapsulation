#pragma once
#include "Vecteur2.h"

class AMovable
{
protected:
	Vecteur2 direc;
	float vite;
public:
	AMovable(Vecteur2 direc, float vit);
	virtual void SetPosDirec(Vecteur2 direc);
	virtual void SetPosVit(float vit);
	virtual Vecteur2 deplacer(Vector2 direction, float s);

};
