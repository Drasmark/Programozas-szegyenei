#ifndef TUPLE_H
#define TUPLE_H

#include<iostream>
#include<exception>

using namespace std;

namespace Util {

template<class T, class U>
class Tuple
{
private:
    T key;
    U value;

    class equality_exception : public exception {
        virtual const char* what() const throw(){
            return "A parok egyenloek!";
        }
    };

public:
    Tuple(){}
    Tuple(T k, U v) : key(k), value(v){}
    void print(){
        cout << "[Key: " << key << " -> Value: " << value << "]";
    }
    int compare(const Tuple& t2){
        if(key > t2.key) return 1;
        if(key < t2.key) return -1;
        if(value > t2.value) return 1;
        if(value < t2.value) return -1;
        throw equality_exception();
    }
};

}

#endif // TUPLE_H
