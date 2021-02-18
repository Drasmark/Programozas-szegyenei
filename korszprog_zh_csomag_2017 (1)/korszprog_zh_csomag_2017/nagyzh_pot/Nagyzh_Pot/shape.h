#ifndef SHAPE_H
#define SHAPE_H

#include<string>

using namespace std;

class Shape
{
private:
    string color;
    string size;
    string type;
public:
    Shape(const string& c, const string& s, const string& t);
    virtual Shape* Clone() = 0;
    virtual void setParameters(int x, int y = 0) = 0;
    string getColor() const;
    void setColor(const string &value);
    string getSize() const;
    void setSize(const string &value);
    string getType() const;
    void setType(const string &value);
};

#endif // SHAPE_H
