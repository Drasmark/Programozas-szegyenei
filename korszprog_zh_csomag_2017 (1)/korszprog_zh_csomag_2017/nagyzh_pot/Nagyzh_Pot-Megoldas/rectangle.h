#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
private:
    int width = 0;
    int height = 0;
public:
    using Shape::Shape;
    virtual Rectangle* Clone();
    virtual void setParameters(int x, int y);
    int getWidth() const;
    void setWidth(int value);
    int getHeight() const;
    void setHeight(int value);
};

#endif // RECTANGLE_H
