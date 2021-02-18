#ifndef CAR_H
#define CAR_H

#include<string>

using namespace std;

class Car
{
private:
    string name;
    string type;
    int speed;
public:
    Car(const string& _name, const string& _type, int _speed);
    virtual ~Car();
    const string& getName() const;
    const string& getType() const;
    int getSpeed() const;
    virtual Car* Clone() = 0;
};

#endif // CAR_H
