#include "circle.h"

Circle *Circle::Clone()
{
    return new Circle(*this);
}

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
