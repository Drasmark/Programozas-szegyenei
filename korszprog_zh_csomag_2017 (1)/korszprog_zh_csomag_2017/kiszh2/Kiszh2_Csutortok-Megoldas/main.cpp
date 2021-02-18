#include <iostream>

#include "manypoints.h"

using namespace std;

int main()
{
    ManyPoints mp;
    mp.readFromFile("ertekek.txt");
    mp.print();
    return 0;
}
