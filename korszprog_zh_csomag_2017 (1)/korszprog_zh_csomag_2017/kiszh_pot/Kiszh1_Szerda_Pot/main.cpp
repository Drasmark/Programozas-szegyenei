#include <iostream>
#include <exception>

#include "triangle.h"

using namespace std;
//using namespace Shape;

int main()
{
    Triangle t1(2, 5);
    Triangle t2(1, 5);
    Triangle t3(3, 5);
    Triangle t4(5, 5);
    Triangle t5(4, 2);

    /*compare(t1, t3); //Kisebb!
    compare(t5, t4); //Kisebb!
    compare(t1, t2); //A masik haromszog nagyobb!*/

    return 0;
}
