#ifndef TUPLE_H
#define TUPLE_H

#include<iostream>
#include<exception>

using namespace std;

namespace Math {

template<class T, class U>
class Point
{
private:
    T x;
    U y;

    class placement_exception : public exception {
        virtual const char* what() const throw(){
            return "A pontok kulonbozo siknegyedben helyezkednek el!";
        }
    };

public:
    Point(){}
    Point(T _x, U _y) : x(_x), y(_y){}
    void print(){
        cout << "(x: " << x << ", y: " << y << ")";
    }
    void placement(Point& p2){
        if(x > 0 && y > 0 && p2.x > 0 && p2.y > 0){ cout << "I. siknegyed" << endl; return; }
        if(x < 0 && y > 0 && p2.x < 0 && p2.y > 0){ cout << "II. siknegyed" << endl; return; }
        if(x < 0 && y < 0 && p2.x < 0 && p2.y < 0){ cout << "III. siknegyed" << endl; return; }
        if(x > 0 && y < 0 && p2.x > 0 && p2.y < 0){ cout << "IV. siknegyed" << endl; return; }
        throw placement_exception();
    }
};

}

#endif // TUPLE_H
