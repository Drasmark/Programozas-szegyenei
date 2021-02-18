#include "point.h"

Point::Point(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

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

