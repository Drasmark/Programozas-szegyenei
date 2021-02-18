#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace Shape {

class Rectangle
{
private:
    int width;
    int height;
public:
    Rectangle(int w, int h);
    //friend bool operator< (const Rectangle& r1, const Rectangle& r2);
    bool operator<(Rectangle& r);
};

}

#endif // RECTANGLE_H
