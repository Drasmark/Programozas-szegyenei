#include "pair.h"

Pair::Pair(int _a, int _b) : a(_a), b(_b)
{

}

bool Pair::negative()
{
    return a < b;
}

void Pair::print()
{
    cout << "a: " << a << ", b: " << b << endl;
}
