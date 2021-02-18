#include <iostream>
#include <exception>

#include "triangle.h"

using namespace std;
using namespace Shape;

namespace Shape {

class bigger_exception : public exception {
    virtual const char* what() const throw(){
        return "A masik haromszog nagyobb!";
    }
};

template<class T>
void compare(T& shape1, T& shape2){
    if(shape1 < shape2){
        cout << "Kisebb!" << endl;
    }
    else{
        throw bigger_exception();
    }
}

}

int main()
{
    Triangle t1(2, 5);
    Triangle t2(1, 5);
    Triangle t3(3, 5);
    Triangle t4(5, 5);
    Triangle t5(4, 2);
    try{
        compare(t1, t3); //Kisebb!
        compare(t5, t4); //Kisebb!
        compare(t1, t2);
    }
    catch(exception& ex){
        cout << ex.what() << endl; //A masik haromszog nagyobb!
    }
    return 0;
}
