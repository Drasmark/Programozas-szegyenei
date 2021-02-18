#ifndef TRIPLET_H
#define TRIPLET_H

#include<iostream>
#include<exception>

using namespace std;

namespace ZH {

template<class T>
class Triplet {
private:
    T a;
    T b;
    T c;

    class equality_exception : public exception {
        virtual const char* what() const throw() {
            return "The values are equal!";
        }
    };

public:
    Triplet(T _a, T _b, T _c) : a(_a), b(_b), c(_c) {}
    const T& biggest(){
        if(a == b && b == c) throw equality_exception();
        if(a > b && b > c) return a;
        if(a > c && c > b) return a;
        if(b > a && a > c) return b;
        if(b > c && c > a) return b;
        if(c > a && a > b) return c;
        if(c > b && b > a) return c;
    }
};

}

#endif // TRIPLET_H
