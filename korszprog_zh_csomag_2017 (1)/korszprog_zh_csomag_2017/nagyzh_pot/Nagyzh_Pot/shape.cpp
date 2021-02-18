#include "shape.h"

Shape::Shape(const string &c, const string &s, const string &t) : color(c), size(s), type(t)
{

}

string Shape::getSize() const
{
    return size;
}

void Shape::setSize(const string &value)
{
    size = value;
}

string Shape::getType() const
{
    return type;
}

void Shape::setType(const string &value)
{
    type = value;
}

string Shape::getColor() const
{
    return color;
}

void Shape::setColor(const string &value)
{
    color = value;
}
