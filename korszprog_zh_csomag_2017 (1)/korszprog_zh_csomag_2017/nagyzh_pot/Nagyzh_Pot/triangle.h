#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
private:
    int base = 0;
    int height = 0;
public:
    using Shape::Shape;

    virtual void setParameters(int x, int y);
    int getBase() const;
    void setBase(int value);
    int getHeight() const;
    void setHeight(int value);
};

#endif // TRIANGLE_H
