#include "shapefactory.h"

namespace factory {

ShapeFactory &ShapeFactory::getInstance()
{
    static ShapeFactory instance;
    return instance;
}

ShapeFactory::~ShapeFactory()
{
    for(auto p : prototypes){
        delete p.second;
    }
}

void ShapeFactory::addPrototype(Shape *shape)
{
    prototypes.insert(pair<string, Shape*>(shape->getType(), shape));
}

Shape *ShapeFactory::getPrototype(const string &type)
{
    if(prototypes.find(type) != prototypes.end()){
        return prototypes[type]->Clone();
    }
    else{
        throw prototype_not_found_exception(type);
    }
}

}
