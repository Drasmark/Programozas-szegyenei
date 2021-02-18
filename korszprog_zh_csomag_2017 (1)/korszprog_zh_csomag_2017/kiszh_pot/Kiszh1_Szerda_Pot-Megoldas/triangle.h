#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace Shape {

class Triangle
{
private:
    int base;
    int height;
public:
    Triangle(int b, int h);
    bool operator<(Triangle& r);
};

}

#endif // TRIANGLE_H
