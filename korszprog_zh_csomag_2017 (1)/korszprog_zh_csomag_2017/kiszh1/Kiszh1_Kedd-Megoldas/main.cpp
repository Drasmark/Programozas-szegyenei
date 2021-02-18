#include <iostream>
#include <exception>

#include "rectangle.h"

using namespace std;
using namespace Shape;

namespace Shape {

class not_fit_exception : public exception {
    virtual const char* what() const throw(){
        return "Nem fer bele!";
    }
};

template<class T>
void fit(T& shape1, T& shape2){
    if(shape1 < shape2){
        cout << "Belefer!" << endl;
    }
    else{
        throw not_fit_exception();
    }
}

}

int main()
{
    Rectangle r1(2, 5);
    Rectangle r2(1, 5);
    Rectangle r3(3, 5);
    Rectangle r4(5, 5);
    Rectangle r5(4, 2);
    try{
        fit(r1, r3);
        fit(r5, r4);
        fit(r1, r2);
    }
    catch(exception& ex){
        cout << ex.what() << endl;
    }
    return 0;
}
