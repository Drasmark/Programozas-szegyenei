#include "triangle.h"

namespace Shape {

Triangle::Triangle(int b, int h) : base(b), height(h) {}

bool Triangle::operator<(Triangle &r)
{
    return this->base * this->height / 2 < r.base * r.height / 2;
}

}
