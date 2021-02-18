#include "triangle.h"

Triangle *Triangle::Clone()
{
    return new Triangle(*this);
}

void Triangle::setParameters(int x, int y)
{
    this->setBase(x);
    this->setHeight(y);
}

int Triangle::getBase() const
{
    return base;
}

void Triangle::setBase(int value)
{
    base = value;
}

int Triangle::getHeight() const
{
    return height;
}

void Triangle::setHeight(int value)
{
    height = value;
}
