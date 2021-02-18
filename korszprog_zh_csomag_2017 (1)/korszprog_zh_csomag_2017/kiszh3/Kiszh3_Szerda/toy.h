#ifndef TOY_H
#define TOY_H

#include<string>

using namespace std;

class Toy
{
private:
    string name;
    string type;
    int age;
public:
    Toy(const string& _name, const string& _type, int _age);
    virtual ~Toy();
    const string& getName() const;
    const string& getType() const;
    int getAge() const;
    virtual Toy* Clone() = 0;
};

#endif // TOY_H
