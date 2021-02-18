#ifndef MANYPOINTS_H
#define MANYPOINTS_H

#include<list>
#include<vector>
#include<string>
#include<fstream>
#include<iostream>

#include "point.h"

using namespace std;

class ManyPoints
{
private:
    list<Point> points;
    vector<double> values;
public:
    ManyPoints();
    void readFromFile(const string& file_name);
    void print(bool reverse = false) const;
};

#endif // MANYPOINTS_H
