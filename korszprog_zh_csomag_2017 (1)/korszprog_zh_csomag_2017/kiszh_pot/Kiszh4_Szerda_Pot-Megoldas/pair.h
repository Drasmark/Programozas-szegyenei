#ifndef PAIR_H
#define PAIR_H

#include <iostream>

using namespace std;

class Pair
{
private:
    int a, b;
public:
    Pair(int a, int b);
    bool negative();
    void print();
};

#endif // PAIR_H
