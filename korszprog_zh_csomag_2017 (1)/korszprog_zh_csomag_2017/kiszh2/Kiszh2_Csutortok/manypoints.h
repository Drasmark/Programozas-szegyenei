#ifndef MANYPOINTS_H
#define MANYPOINTS_H
#include <list>
#include <vector>
#include <algorithm>
#include "point.h"
#include <fstream>
#include <iostream>
using namespace std;
class ManyPoints
{
    list<Point> pontok;
    vector<double> ertekek;
public:
    ManyPoints();
    void readFromFile(const string& file);
    void print(bool fordit = false)const;

};

#endif // MANYPOINTS_H
