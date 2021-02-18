#include <iostream>
#include <exception>
#include <string>

#include "point.h"

using namespace std;
using namespace Math;

int main()
{

    Point<int, int> p1(1, 10);
    p1.print(); //(x: 1, y: 10)
    cout << endl;
    Point<double, int> p2(2.5, 5);
    p2.print(); //(x: 2.5, y: 5)
    cout << endl;

    Point<int, int> p3(1, 1);
    Point<double, int> p4(-2.5, -1);

    p1.print(); //(x: 1, y: 10)
    p3.print(); //(x: 1, y: 1)
    cout << " -> ";
    try{
        p1.placement(p3); //I. siknegyed
    }
    catch(exception& ex){
        cout << ex.what() << endl;
    }

    p2.print(); //(x: 2.5, y: 5)
    p4.print(); //(x: -2.5, y: -1)
    cout << " -> ";
    try{
        p2.placement(p4);
    }
    catch(exception& ex){
        cout << ex.what() << endl; //A pontok kulonbozo siknegyedben helyezkednek el!
    }


    return 0;
}
