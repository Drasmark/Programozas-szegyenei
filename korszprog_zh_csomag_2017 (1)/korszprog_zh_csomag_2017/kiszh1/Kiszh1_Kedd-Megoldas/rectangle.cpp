#include "rectangle.h"

namespace Shape {

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

bool Rectangle::operator<(Rectangle &r)
{
    if((width <= r.width && height <= r.height) || (width <= r.height && height <= r.width)){
        return true;
    }
    return false;
}

/*bool operator< (const Rectangle& r1, const Rectangle& r2){
    if((r1.width <= r2.width && r1.height <= r2.height) || (r1.width <= r2.height && r1.height <= r2.width)){
        return true;
    }
    return false;
}*/



}
