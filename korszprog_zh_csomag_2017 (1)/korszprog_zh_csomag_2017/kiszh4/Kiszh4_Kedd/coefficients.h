#ifndef COEFFICIENTS_H
#define COEFFICIENTS_H

#include <cmath>
#include <iostream>

using namespace std;

class Coefficients
{
private:
    int a, b, c;
public:
    Coefficients(int _a, int _b, int _c);
    bool solvable();
    void print();
};

#endif // COEFFICIENTS_H
