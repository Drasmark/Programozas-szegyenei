#include "coefficients.h"

Coefficients::Coefficients(int _a, int _b, int _c) : a(_a), b(_b), c(_c)
{

}

bool Coefficients::solvable()
{
    return pow(b, 2) - 4 * a * c >= 0;
}

void Coefficients::print()
{
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
