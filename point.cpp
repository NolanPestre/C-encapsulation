#include "point.h"
#include <iostream>

std::string point::ToString()
{

	return " x = " + std::to_string(point::x) + " y = " + std::to_string(point::y) + " z = " + std::to_string(point::z);
}
