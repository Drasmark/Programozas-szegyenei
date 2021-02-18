#include "circle.h"



void Circle::setParameters(int x, int y)
{
    this->setRadius(x);
}

int Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(int value)
{
    radius = value;
}
