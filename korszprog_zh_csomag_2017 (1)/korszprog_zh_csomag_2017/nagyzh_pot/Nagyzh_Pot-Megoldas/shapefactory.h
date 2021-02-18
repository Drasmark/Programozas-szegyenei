#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include<iostream>
#include<string>
#include<map>
#include<exception>

#include "shape.h"

using namespace std;

namespace factory {

class ShapeFactory
{
private:
    class prototype_not_found_exception : public exception {
    private:
        string msg;
    public:
        prototype_not_found_exception(const string& type){
            this->msg = "Prototype not found for type: " + type;
        }
        ~prototype_not_found_exception(){}
        virtual const char* what() const noexcept {
            return msg.c_str();
        }
    };

    map<string, Shape*> prototypes;
    ShapeFactory(){}
    ShapeFactory(const ShapeFactory&){}
public:
    static ShapeFactory& getInstance();
    ~ShapeFactory();
    void addPrototype(Shape* shape);
    Shape* getPrototype(const string& type);
};

}

#endif // SHAPEFACTORY_H
