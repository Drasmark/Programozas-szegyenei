#ifndef POINT_H
#define POINT_H

class Point
{
	double x, y, z;
public:
	Point(double x, double y, double z);
	double getX() const;
	double getY() const;
	double getZ() const;
};

#endif // POINT_H
