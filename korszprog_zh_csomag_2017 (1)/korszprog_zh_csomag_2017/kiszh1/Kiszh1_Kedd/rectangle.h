#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int width;
    int height;
public:
    Rectangle(int w, int h);
    friend bool operator< (const Rectangle& r1, const Rectangle& r2);
};

#endif // RECTANGLE_H
