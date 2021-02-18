#include "point.h"

Point::Point(double x, double y, double z):
	x(x),
	y(y),
	z(z)
{
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

double Point::getZ() const
{
	return z;
}
