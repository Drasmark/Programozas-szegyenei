#include "rectangle.h"

Rectangle *Rectangle::Clone()
{
    return new Rectangle(*this);
}

void Rectangle::setParameters(int x, int y)
{
    this->setHeight(x);
    this->setWidth(y);
}

int Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(int value)
{
    height = value;
}

int Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(int value)
{
    width = value;
}
