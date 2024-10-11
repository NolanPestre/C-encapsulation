#include "IAttacker.h"

void IAttacker::attaque(Alive* vie, float dammage)
{
	vie->TakeDammage(dammage);
}
//test commentaire push github