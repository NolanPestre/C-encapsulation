#include "AMovable.h"

AMovable::AMovable(Vecteur2 direct, float vit) : direc(direct), vite(vit)
{
}

void AMovable::SetPosDirec(Vecteur2 direc)
{
	direc.SetX(direc.GetX());
	direc.SetY(direc.GetX());
}

void AMovable::SetPosVit(float vit)
{
	vite = vit;
}

Vecteur2 AMovable::deplacer()
{
	float x = direc.GetX();
	x += vite;

	float y = direc.GetY();
	y += vite;

	Vecteur2 nouv_vecteur(x, y);
	return nouv_vecteur;

}
