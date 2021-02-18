#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
private:
    int radius = 0;
public:
    using Shape::Shape;
    virtual Circle* Clone();
    virtual void setParameters(int x, int y);
    int getRadius() const;
    void setRadius(int value);
};

#endif // CIRCLE_H
