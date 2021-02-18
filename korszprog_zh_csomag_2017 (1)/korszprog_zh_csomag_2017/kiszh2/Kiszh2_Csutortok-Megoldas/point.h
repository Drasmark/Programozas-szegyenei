#ifndef POINT_H
#define POINT_H


class Point
{
private:
    double x;
    double y;
    double z;
public:
    Point(double _x, double _y, double _z);
    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif // POINT_H
